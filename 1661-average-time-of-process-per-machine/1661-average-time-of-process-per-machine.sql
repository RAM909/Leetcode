SELECT a.machine_id , 
       ROUND(AVG(a.timestamp - b.timestamp), 3) as "processing_time"
FROM Activity b, 
     Activity a
WHERE 
    b.machine_id = a.machine_id
AND 
    b.process_id = a.process_id
AND 
    b.activity_type = 'start'
AND 
    a.activity_type = 'end'
GROUP BY machine_id;