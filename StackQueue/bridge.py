def solution(bridge_length, weight, truck_weights):
    bridge = []
    for i in range(bridge_length):
        bridge.append(0)
    count = 0
    cur_weight = 0
    while truck_weights:
        cur_weight -= bridge[0]
        bridge.pop(0)
        if cur_weight + truck_weights[0] <= weight:
            cur_weight += truck_weights[0]
            bridge.append(truck_weights[0])
            truck_weights.pop(0)
        else:
            bridge.append(0)
        count += 1
    return count + bridge_length

print(solution(2, 10, [7,4,5,6]))