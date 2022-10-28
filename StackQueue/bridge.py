def solution(bridge_length, weight, truck_weights):
    bridge = []
    for i in range(bridge_length):
        bridge.append(0)
    current_weight = 0
    count = 0
    while truck_weights:
        current_weight += bridge[0]
        a = bridge.pop(0)
        print(bridge)
        if current_weight + truck_weights[0] <= weight:
            current_weight += truck_weights[0]
            bridge.append(truck_weights[0])
            truck_weights = truck_weights.pop(-1)
        else:
            bridge.append(0)
        count += 1
    return count + bridge_length

print(solution(2, 10, [7,4,5,6]))

