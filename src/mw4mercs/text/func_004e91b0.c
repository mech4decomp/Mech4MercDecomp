/*
 * FUN_004e91b0 (260 B) — __thiscall, RET 0x8. MLR/Adept core: allocates a
 * 0x164-byte object (FUN_004084d0), initializes it via FUN_004b6a30, stores
 * it at this+0x17c, calls a virtual method (vtable+8), then runs a nested
 * 8x8 loop allocating 0x18c-byte objects (FUN_004e86e0) and registering them
 * via FUN_004e2e90 / FUN_004b6c10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004b6a30(void);
extern void __cdecl FUN_004e86e0(void);
extern void __cdecl FUN_004e2e90(void);
extern void __cdecl FUN_004b6c10(void);

extern int g_007daa20;   /* DAT_007daa20 */
extern int g_007744a4;   /* DAT_007744a4 */
extern int g_007dc728;   /* DAT_007dc728 */

__declspec(naked) void FUN_004e91b0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x164
        mov     edi, ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L91ED
        mov     ecx, dword ptr [g_007daa20]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [g_007744a4]
        push    ecx
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    ecx
        push    0x8
        push    0x8
        mov     ecx, eax
        call    FUN_004b6a30
        jmp     L91EF
L91ED:
        xor     eax, eax
L91EF:
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, edi
        mov     dword ptr [edi + 0x17c], eax
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [edi + 0x17c]
        or      dword ptr [eax + 0x18], 0x2
        mov     byte ptr [esp + 0x18], 0x0
L920C:
        mov     ebp, dword ptr [esp + 0x18]
        xor     bl, bl
        mov     byte ptr [esp + 0x14], bl
L9216:
        push    0x18c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L9251
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x151]
        shl     cl, 0x3
        add     cl, bl
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x150]
        shl     dl, 0x3
        push    ecx
        add     dl, byte ptr [esp + 0x1c]
        mov     ecx, eax
        push    edx
        push    edi
        call    FUN_004e86e0
        mov     esi, eax
        jmp     L9253
L9251:
        xor     esi, esi
L9253:
        xor     eax, eax
        mov     al, byte ptr [esi + 0x151]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x150]
        push    esi
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_007dc728]
        call    FUN_004e2e90
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x17c]
        push    esi
        push    edx
        push    ebp
        call    FUN_004b6c10
        mov     edx, dword ptr [esi + 0x18]
        or      edx, 0x2
        inc     bl
        cmp     bl, 0x8
        mov     dword ptr [esi + 0x18], edx
        mov     byte ptr [esp + 0x14], bl
        jc      L9216
        mov     al, byte ptr [esp + 0x18]
        inc     al
        cmp     al, 0x8
        mov     byte ptr [esp + 0x18], al
        jc      L920C
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
