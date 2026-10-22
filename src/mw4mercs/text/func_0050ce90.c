/*
 * FUN_0050CE90 (63 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050ce90(void)
{
    
__asm {
mov ecx, [esp+0x08]
        push esi
        mov esi, [esp+0x08]
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 0x03
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        test edx, edx
        jle return_src
        mov eax, [esp+0x10]
        lea edx, [edx + edx*8]
        shl edx, 0x02
        push edi
        mov ecx, edx
        shr ecx, 0x02
        mov edi, eax
        rep movsd
        pop edi
        add eax, edx
        pop esi
        ret
return_src:
        mov eax, [esp+0x10]
        pop esi
        ret
    }


}
