% Create a 3x3 matrix A
A = [1 2 3; 4 5 6; 7 8 9];
disp('Matrix A:');
disp(A);

% Create another matrix B
B = [9 8 7; 6 5 4; 3 2 1];
disp('Matrix B:');
disp(B);

% Matrix addition and subtraction
C = A + B;
D = A - B;
disp('C (A + B):');
disp(C);
disp('D (A - B):');
disp(D);

% Scalar addition
E = A + 10;
disp('E (A + 10):');
disp(E);

% Element-wise multiplication
F = A .* B;
disp('F (A .* B):');
disp(F);

% Matrix multiplication
G = A * B';
disp('G (A * B''):');
disp(G);

% Transpose of a matrix
H = A';
disp('H (Transpose of A):');
disp(H);

% Inversion of a matrix (if invertible)
I = inv(A);
disp('I (Inverse of A):');
disp(I);

% Determinant of a matrix
det_A = det(A);
disp(['Determinant of Matrix A: ', num2str(det_A)]);

% Eigenvalues and eigenvectors
[eigenVectors, eigenValues] = eig(A);
disp('Eigenvalues of Matrix A:');
disp(diag(eigenValues));
