/*
 * FUN_0050B260 (93 B) — Array iteration with field copy
 * Iterates through an array of 0x24-byte structures and copies fields
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050b260(void)
{
    
__asm {
push ecx
        mov eax, [ecx]
        push ebx
        push esi
        mov esi, [ecx+0x04]
        xor bl, bl
        cmp eax, esi
        mov [esp+0x0B], bl
        jz done
loop_top:
        mov edx, [eax+0x04]
        test edx, edx
        jnz next
        mov edx, [eax+0x10]
        sub edx, 0x0
        jz check_flag2
        sub edx, 0x04
        jz handle_type4
        sub edx, 0x02
        jnz next
handle_type4:
        test bl, bl
        mov dl, [eax+0x20]
        mov [ecx+0x15], dl
        mov byte ptr [esp+0x0B], 0x01
        jnz done
        jmp next
check_flag2:
        cmp dword ptr [eax+0x14], 0x01
        jnz next
        mov dl, [eax+0x20]
        mov [ecx+0x14], dl
        mov dl, [esp+0x0B]
        test dl, dl
        mov bl, 0x01
        jnz done
next:
        add eax, 0x24
        cmp eax, esi
        jnz loop_top
done:
        pop esi
        pop ebx
        pop ecx
        ret
    }


}
