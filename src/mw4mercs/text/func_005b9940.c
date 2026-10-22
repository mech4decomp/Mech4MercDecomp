/*
 * FUN_005b9940 (370 B) — __thiscall (ECX = this), RET 0x18 (6 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ba720(void);
extern void __stdcall FUN_005ba780(void);
extern void __stdcall FUN_005ba730(void);
extern void __stdcall FUN_004084d0(void);
extern void __stdcall FUN_0059db70(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005b9940(void)
{
    
__asm {
mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x18
        cmp     edx, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jg      L_9aa8
        mov     esi, dword ptr [esp + 0x30]
        lea     edi, [edx + edx*0x4]
        lea     edi, [esi + edi*0x4]
        sub     eax, edx
        lea     ebx, [ecx + edi*0x8]
        inc     eax
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], eax
L_996f:
        mov     eax, dword ptr [esp + 0x38]
        cmp     esi, eax
        jg      L_9a8b
        mov     ebp, eax
        sub     ebp, esi
        inc     ebp
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x34], ebp
L_9988:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_99bd
L_998e:
        mov     edi, dword ptr [esp + 0x3c]
        lea     eax, [esi + 0x4]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, edi
        call    FUN_005ba720
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005ba780
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, edi
        call    FUN_005ba730
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_998e
L_99bd:
        mov     eax, dword ptr [esp + 0x40]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [ebx + 0x4]
        jz      L_99dd
        test    esi, esi
        jz      L_99d2
        mov     dword ptr [esi], ecx
L_99d2:
        add     esi, 0x4
        mov     dword ptr [eax + 0x4], esi
        jmp     L_9a75
L_99dd:
        mov     edi, dword ptr [eax]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x18], 0x1
        mov     dword ptr [esp + 0x1c], eax
        lea     ecx, [esp + 0x18]
        jc      L_99ff
        lea     ecx, [esp + 0x1c]
L_99ff:
        mov     ebp, dword ptr [ecx]
        add     ebp, eax
        jz      L_9a19
        /* __emit: LEA EAX,[EBP*4+0] no-base SIB form (MSVC6 cannot express) */
        __emit 0x8D
        __emit 0x04
        __emit 0xAD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     L_9a1b
L_9a19:
        xor     ebx, ebx
L_9a1b:
        mov     ecx, dword ptr [esp + 0x40]
        push    0x0
        push    ecx
        push    ebx
        push    esi
        push    edi
        call    FUN_0059db70
        add     esp, 0x14
        test    eax, eax
        jz      L_9a3a
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [eax], ecx
L_9a3a:
        mov     ecx, dword ptr [esp + 0x40]
        push    0x0
        push    ecx
        add     eax, 0x4
        push    eax
        push    esi
        push    esi
        call    FUN_0059db70
        add     esp, 0x14
        test    edi, edi
        mov     esi, eax
        jz      L_9a5e
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_9a5e:
        mov     eax, dword ptr [esp + 0x40]
        lea     edx, [ebx + ebp*0x4]
        mov     ebp, dword ptr [esp + 0x34]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], edx
L_9a75:
        add     ebx, 0x8
        dec     ebp
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x34], ebp
        jnz     L_9988
        mov     esi, dword ptr [esp + 0x30]
L_9a8b:
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, 0xa0
        dec     eax
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], eax
        jnz     L_996f
L_9aa8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x18
    }


}
