/*
 * FUN_0050B220 (61 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050b220(void)
{
    
__asm {
mov eax, [ecx]
        push esi
        mov esi, [ecx+0x04]
        cmp eax, esi
        jz done
loop_top:
        mov edx, [eax+0x04]
        test edx, edx
        jnz next
        mov edx, [eax+0x10]
        sub edx, 0x0
        jz check_flag
        sub edx, 0x04
        jz store_from_15
        sub edx, 0x02
        jnz next
store_from_15:
        mov dl, [ecx+0x15]
        jmp store_byte
check_flag:
        cmp dword ptr [eax+0x14], 0x01
        jnz next
        mov dl, [ecx+0x14]
store_byte:
        mov [eax+0x20], dl
next:
        add eax, 0x24
        cmp eax, esi
        jnz loop_top
done:
        pop esi
        ret
    }


}
