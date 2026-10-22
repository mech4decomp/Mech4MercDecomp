/*
 * FUN_005ba4e0 (396 B) — __thiscall (ECX = this), RET 4.
 * Distance/selection logic: calls FUN_005ba3b0, FUN_005ba480, FUN_005ba440
 * to compute distances, then updates selection state via vtable calls and
 * helper FUN_0041fd80/FUN_0041fcb0/FUN_0041fcd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ba3b0(void);
extern void __stdcall FUN_005ba480(void);
extern void __stdcall FUN_005ba440(void);
extern void __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_00559be0(void);
extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void);

__declspec(naked) void __stdcall FUN_005ba4e0(void)
{
    

extern int DAT_0076c5b0;
__asm {
push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        push    edi
        call    FUN_005ba3b0
        test    al, al
        jz      L_665
        push    edi
        mov     ecx, esi
        call    FUN_005ba480
        fst     dword ptr [esp + 0xc]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     L_665
        push    edi
        mov     ecx, esi
        call    FUN_005ba440
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [esp + 0xc]
        fnstsw ax
        test    ah, 0x41
        jz      L_665
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      L_589
        mov     al, byte ptr [edi + 0x2f9]
        test    al, al
        jz      L_589
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        mov     ecx, esi
        mov     ebx, eax
        call    FUN_005f07c0
        test    ebx, ebx
        jz      L_589
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L_589
        cmp     eax, ebx
        jz      L_589
        push    0x16
        mov     ecx, esi
        mov     byte ptr [edi + 0x2f9], 0x0
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
    L_589:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        mov     ebx, eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xc], ebx
        call    FUN_005f07c0
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        cmp     ebx, eax
        jz      L_5e9
        test    ebx, ebx
        jz      L_624
        lea     ebx, [esi + 0x198]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5ce
        fld     dword ptr [esi + 0x1a0]
        fcomp   dword ptr [esp + 0x14]
        fnstsw ax
        test    ah, 0x41
        jnz     L_624
    L_5ce:
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x1a0], eax
        jmp     L_624
    L_5e9:
        lea     ebx, [esi + 0x1a4]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_60b
        fld     dword ptr [esi + 0x1ac]
        fcomp   dword ptr [esp + 0x14]
        fnstsw ax
        test    ah, 0x41
        jnz     L_624
    L_60b:
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x1ac], ecx
    L_624:
        mov     eax, dword ptr [esi + 0x17c]
        cmp     eax, 0x20
        jge     L_665
        mov     ebx, dword ptr [esi + eax*0x4 + 0x1d4]
        push    ebp
        lea     ebp, [ebx + 0x10]
        mov     ecx, ebp
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x1c], eax
        mov     eax, dword ptr [esi + 0x17c]
        inc     eax
        mov     dword ptr [ebx + 0x18], edx
        mov     dword ptr [esi + 0x17c], eax
        pop     ebp
    L_665:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }


}
