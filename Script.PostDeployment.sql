INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C001', 'IT101', 'Introduction to IT', 3, 'IT', 100);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C002', 'SE102', 'Software Design Principles', 3, 'SE', 100);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C003', 'CS103', 'Data Structures', 3, 'CS', 200);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C004', 'IT201', 'Database Systems', 3, 'IT', 200);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C005', 'SE202', 'Object-Oriented Programming', 3, 'SE', 200);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C006', 'CS204', 'Computer Networks', 3, 'CS', 200);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C007', 'IT301', 'Web Technologies', 3, 'IT', 300);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C008', 'SE303', 'Agile Software Development', 3, 'SE', 300);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C009', 'CS304', 'Operating Systems', 3, 'CS', 300);

INSERT INTO [dbo].[Courses] ([course_id], [course_code], [course_name], [credit_hours], [program_id], [level])
VALUES ('C010', 'IT305', 'Cybersecurity Basics', 3, 'IT', 300);

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C011')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C011', 'CS310', 'Machine Learning Basics', 3, 'CS', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C012')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C012', 'SE215', 'Software Testing', 3, 'SE', 200);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C013')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C013', 'IT220', 'Cloud Computing', 3, 'IT', 200);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C014')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C014', 'CS225', 'Algorithms and Complexity', 3, 'CS', 200);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C015')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C015', 'SE110', 'Intro to Software Engineering', 3, 'SE', 100);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C016')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C016', 'IT104', 'IT Fundamentals', 3, 'IT', 100);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C017')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C017', 'CS120', 'Discrete Mathematics', 3, 'CS', 100);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C018')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C018', 'SE230', 'Mobile App Development', 3, 'SE', 200);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C019')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C019', 'IT310', 'Ethical Hacking', 3, 'IT', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C020')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C020', 'CS320', 'AI & Expert Systems', 3, 'CS', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C021')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C021', 'SE305', 'DevOps Fundamentals', 3, 'SE', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C022')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C022', 'IT315', 'IT Project Management', 3, 'IT', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C023')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C023', 'CS330', 'Advanced Programming Concepts', 3, 'CS', 300);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C024')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C024', 'SE240', 'User Interface Design', 3, 'SE', 200);
END

IF NOT EXISTS (SELECT 1 FROM [dbo].[Courses] WHERE [course_id] = 'C025')
BEGIN
    INSERT INTO [dbo].[Courses] VALUES ('C025', 'IT230', 'Networking Essentials', 3, 'IT', 200);
END
