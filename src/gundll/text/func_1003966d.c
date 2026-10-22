/*
 * FUN_1003966d (440 B) __cdecl.
 * SEH-guarded object-registration helper. Installs an exception frame
 * (handler 0x1003eb9c, data 0x1004b670), then dispatches on flags to
 * register/copy data via FUN_1003ec80 / FUN_10037564 / FUN_1003755d.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003eabb(void);   /* rel32 call */
extern void __cdecl FUN_1003ead7(void);   /* rel32 call */
extern void __cdecl FUN_10039898(void);   /* rel32 call */
extern void __cdecl FUN_1003ec80(void);   /* rel32 call */
extern void __cdecl FUN_1003eaf3(void);   /* rel32 call */
extern void __cdecl FUN_10037564(void);   /* rel32 call */
extern void __cdecl FUN_1003755d(void);   /* rel32 call */
extern void __cdecl FUN_10039985(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003966d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x1004b670
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_10039816
        cmp     byte ptr [eax + 0x8], 0
        jz      L_10039816
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_10039816
        mov     edx, dword ptr [ebp + 0xc]
        lea     edi, [eax + edx + 0xc]
        and     dword ptr [ebp - 0x4], 0
        test    byte ptr [ecx], 0x8
        jz      L_1003970a
        mov     esi, dword ptr [ebp + 0x8]
        push    0x1
        push    dword ptr [esi + 0x18]
        call    FUN_1003eabb
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    0x1
        push    edi
        call    FUN_1003ead7
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [ebp + 0x14]
        add     ecx, 0x8
        push    ecx
    L_100396fb:
        push    eax
        call    FUN_10039898
        pop     ecx
        pop     ecx
        mov     dword ptr [edi], eax
        jmp     L_10039812
    L_1003970a:
        mov     esi, dword ptr [ebp + 0x14]
        test    byte ptr [esi], 0x1
        jz      L_10039764
        mov     ebx, dword ptr [ebp + 0x8]
        push    0x1
        push    dword ptr [ebx + 0x18]
        call    FUN_1003eabb
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    0x1
        push    edi
        call    FUN_1003ead7
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    dword ptr [esi + 0x14]
        push    dword ptr [ebx + 0x18]
        push    edi
        call    FUN_1003ec80
        add     esp, 0xc
        cmp     dword ptr [esi + 0x14], 0x4
        jnz     L_10039812
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_10039812
        add     esi, 0x8
        push    esi
        jmp     L_100396fb
    L_10039764:
        cmp     dword ptr [esi + 0x18], 0
        mov     ebx, dword ptr [ebp + 0x8]
        push    0x1
        push    dword ptr [ebx + 0x18]
        jnz     L_100397ac
        call    FUN_1003eabb
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    0x1
        push    edi
        call    FUN_1003ead7
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    dword ptr [esi + 0x14]
        add     esi, 0x8
        push    esi
        push    dword ptr [ebx + 0x18]
        call    FUN_10039898
        pop     ecx
        pop     ecx
        push    eax
        push    edi
        call    FUN_1003ec80
        add     esp, 0xc
        jmp     L_10039812
    L_100397ac:
        call    FUN_1003eabb
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    0x1
        push    edi
        call    FUN_1003ead7
        pop     ecx
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        push    dword ptr [esi + 0x18]
        call    FUN_1003eaf3
        pop     ecx
        test    eax, eax
        jz      L_1003980d
        test    byte ptr [esi], 0x4
        jz      L_100397f3
        push    0x1
        lea     eax, [esi + 0x8]
        push    eax
        push    dword ptr [ebx + 0x18]
        call    FUN_10039898
        pop     ecx
        pop     ecx
        push    eax
        push    dword ptr [esi + 0x18]
        push    edi
        call    FUN_10037564
        jmp     L_10039812
    L_100397f3:
        lea     eax, [esi + 0x8]
        push    eax
        push    dword ptr [ebx + 0x18]
        call    FUN_10039898
        pop     ecx
        pop     ecx
        push    eax
        push    dword ptr [esi + 0x18]
        push    edi
        call    FUN_1003755d
        jmp     L_10039812
    L_1003980d:
        call    FUN_10039985
    L_10039812:
        or      dword ptr [ebp - 0x4], 0xffffffff
    L_10039816:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
