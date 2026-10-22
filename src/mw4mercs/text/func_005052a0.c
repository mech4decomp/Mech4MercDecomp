/*
 * func_005052A0 - 115 bytes
 * State machine handler with error logging
 */
__declspec(naked) void func_005052A0()
{
    

extern void __cdecl FUN_100411bd9(void);
extern void __cdecl FUN_1004dd33e(void);
extern void __cdecl FUN_006fab4f(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp + 8]
        mov     esi, [edi + 4]
        mov     ebx, [edi + 8]
        push    1
        lea     eax, [ebp + 8]
        push    eax
        mov     [ebp - 4], ecx
        push    ebx
        mov     ecx, esi
        call FUN_100411bd9
        mov     ecx, [ebp + 8]
        push    ecx
        mov     ecx, [edi]
        call FUN_1004dd33e
        mov     edi, eax
        test    edi, edi
        jnz     found
        mov     edx, [esi + 0x10]
        mov     ecx, [edx]
        mov     edx, [ebp + 8]
        mov     eax, [esi + 0x14]
        push    edx
        push    ebx
        push    eax
        push    ecx
        push    0x00776E74
        call FUN_006fab4f
        add     esp, 0x14
        test    eax, eax
        jz      skip_int3
        int     3
skip_int3:
        mov     eax, [edi]
        mov     ecx, [ebp - 4]
        pop     edi
        pop     esi
        mov     [ecx], eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
found:
        mov     edx, [edi]
        mov     eax, [ebp - 4]
        pop     edi
        pop     esi
        mov     [eax], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
