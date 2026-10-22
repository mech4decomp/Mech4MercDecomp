/*
 * func_00518530 - 125 bytes
 * Array element removal/shift function
 */
__declspec(naked) void func_00518530()
{
    

extern void __cdecl FUN_1004084d6(void);
extern void __cdecl FUN_1004084c8(void);
__asm {
push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, [esi + 0x409B8]
        mov     eax, [ebx]
        push    edi
        push    eax
        call FUN_1004084d6
        mov     edi, [esi + 0x409B4]
        mov     ecx, [edi]
        push    ecx
        call FUN_1004084c8
        mov     ebp, [esi + 0x409AC]
        add     esp, 8
        cmp     ebp, 1
        jle     done_shift
        mov     edx, ebx
        lea     eax, [edi + 4]
        sub     edx, edi
        mov     ecx, ebx
        lea     edi, [ebp - 1]
shift_loop:
        mov     ebp, [edx + eax]
        mov     [ecx], ebp
        mov     ebp, [eax]
        mov     [eax - 4], ebp
        add     ecx, 4
        add     eax, 4
        dec     edi
        jnz     shift_loop
done_shift:
        mov     eax, [esi + 0x409AC]
        xor     ecx, ecx
        mov     [ebx+eax*4-4], ecx
        mov     edx, [esi + 0x409AC]
        mov     eax, [esi + 0x409B4]
        mov     [eax+edx*4-4], ecx
        mov     eax, [esi + 0x409AC]
        pop     edi
        dec     eax
        mov     [esi + 0x409AC], eax
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }


}
