Select a1.machine_id ,round(avg(a1.timestamp-a2.timestamp),3) as processing_time 
from activity a1 join activity a2 
on a1.machine_id=a2.machine_id and a1.process_id=a2.process_id 
where a1.activity_type='end' and a2.activity_type='start' 
group by a1.machine_id
