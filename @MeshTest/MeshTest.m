classdef MeshTest < matlab.unittest.TestCase

    methods (Test)

        function testFV(testCase)
            F = [1,2,3,4];
            V = [0,0;5,0;5,5;0,5];
            msh = Mesh(V,F);
            msh = msh.generate();
            
            testCase.verifyClass(msh,'Mesh');
        end

        function testSdfBasic(testCase)
            f1 = @(x) sqrt(x(:,1).^2 + x(:,2).^2) - 1.0;

            B = [-2,2,-2,2];
            sdf1 = Sdf(f1,'BdBox',B);

            msh = Mesh(sdf1);
            msh = msh.generate('NElem',120);
            
            testCase.verifyClass(msh,'Mesh');
        end

        function testSdfCircle(testCase)
            sdf = sCircle(1);
            msh = Mesh(sdf);
            msh = msh.generate('NElem',120);
            
            testCase.verifyClass(msh,'Mesh');
        end

        function testSdfRectangle(testCase)
            sdf = sRectangle(1);
            msh = Mesh(sdf);
            msh = msh.generate('NElem',120);
            
            testCase.verifyClass(msh,'Mesh');
        end

        function testQuads(testCase)
            sdf = sRectangle(10,10);
            msh = Mesh(sdf,'Quads',[10,10]);
            msh = msh.generate();

            testCase.verifyClass(msh,'Mesh');
        end

        function testFindNode(testCase)
            F = [1,2,3,4];
            V = [0,0;5,0;5,5;0,5];
            msh = Mesh(V,F);
            msh = msh.generate();
            
            testCase.verifyEqual(msh.findNodes('top'), [1;4]);
            testCase.verifyEqual(msh.findNodes('bottom'), [2;3]);
            testCase.verifyEqual(msh.findNodes('left'), [3;4]);
            testCase.verifyEqual(msh.findNodes('right'), [1;2]);
            testCase.verifyEqual(msh.findNodes('sw'), 3);
            testCase.verifyEqual(msh.findNodes('se'), 2);
            testCase.verifyEqual(msh.findNodes('nw'), 4);
            testCase.verifyEqual(msh.findNodes('ne'), 1);
        end

        function testFindElement(testCase)
            sdf = sRectangle(10,10);
            msh = Mesh(sdf,'Quads',[2,2]);
            msh = msh.generate();
            
            testCase.verifyEqual(msh.findElements('top'), [2;4]);
            testCase.verifyEqual(msh.findElements('bottom'), [1;3]);
            testCase.verifyEqual(msh.findElements('left'), [1;2]);
            testCase.verifyEqual(msh.findElements('right'), [3;4]);
            testCase.verifyEqual(msh.findElements('sw'), 1);
            testCase.verifyEqual(msh.findElements('se'), 3);
            testCase.verifyEqual(msh.findElements('nw'), 2);
            testCase.verifyEqual(msh.findElements('ne'), 4);
        end
    end
end