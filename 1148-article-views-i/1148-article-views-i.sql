
select author_id as "ID"
from views where 
author_id = viewer_id
group by author_id 
order by author_id asc