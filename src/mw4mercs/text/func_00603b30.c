/*
 * FUN_00603B30 (401 B) — __fastcall (ECX=this), RET.
 *
 * Destructor: tears down four object lists (this+0x68/0x70/0x78/0x60),
 * frees member buffers, and calls sub-destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004dd1c0(void);

__declspec(naked) void __fastcall FUN_00603b30(void *param_1)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x68]
        mov     dword ptr [edi], 0x78b8b0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax]
        mov     ebx, 0x78b8e0
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], ebx
        test    eax, eax
        jz      L_603b7d
L_603b55:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_603b7d
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        lea     ecx, [esp + 0x10]
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x18]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (EB DC, ref EB D8) */
        __emit 0xD8
L_603b7d:
        lea     eax, [edi + 0x70]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x1c], 0x78b8dc
        test    eax, eax
        jz      L_603bba
L_603b92:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_603bba
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        lea     ecx, [esp + 0x1c]
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x24]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (EB DC, ref EB D8) */
        __emit 0xD8
L_603bba:
        lea     eax, [edi + 0x78]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x28], ebx
        test    eax, eax
        jz      L_603bf3
L_603bcb:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_603bf3
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        lea     ecx, [esp + 0x28]
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x30]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (EB DC, ref EB D8) */
        __emit 0xD8
L_603bf3:
        lea     eax, [edi + 0x60]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x34], 0x78b8d8
        test    eax, eax
        jz      L_603c29
L_603c08:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_603c29
        lea     ecx, [esp + 0x34]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x3c]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (EB E3, ref EB DF) */
        __emit 0xDF
L_603c29:
        mov     ebp, dword ptr [edi + 0x30]
        test    ebp, ebp
        jz      L_603c55
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jle     L_603c4c
        mov     esi, ebp
        mov     ebx, eax
L_603c3b:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        add     esi, 0x4
        dec     ebx
        jnz     L_603c3b
L_603c4c:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_603c55:
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        jz      L_603c65
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_603c65:
        mov     ecx, dword ptr [edi + 0x3c]
        test    ecx, ecx
        jz      L_603c72
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_603c72:
        lea     ecx, [edi + 0x78]
        call    FUN_00417980
        lea     ecx, [edi + 0x70]
        call    FUN_00417980
        lea     ecx, [edi + 0x68]
        call    FUN_00417980
        lea     ecx, [edi + 0x60]
        call    FUN_00417980
        lea     ecx, [edi + 0x58]
        call    FUN_00417980
        lea     ecx, [edi + 0x50]
        call    FUN_0041fc90
        lea     ecx, [edi + 0x48]
        call    FUN_0041fc90
        lea     ecx, [edi + 0x40]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_004dd1c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret
    }
}
