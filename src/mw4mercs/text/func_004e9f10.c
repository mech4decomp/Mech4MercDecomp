/*
 * FUN_004e9f10 (470 B) — __thiscall. MLR/Adept core: (re)builds renderer
 * state. Calls FUN_004179b0, conditionally FUN_004e9d00, computes a hashed
 * lookup key from globals 0x7dab44/0x7dab40 and this->0x150/0x151, calls
 * FUN_004e2b20 / FUN_004d1f80 / FUN_004af200, then runs a 0x40-iteration
 * loop filling per-slot data via FUN_004c6920 + a virtual call. Calls a
 * virtual method (vtable+0x1c), optionally FUN_006d1730, then walks a linked
 * list at this+0x164 calling FUN_0041fd80 / FUN_004e06b0 / FUN_0041fcd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004e9d00(void);
extern void __cdecl FUN_004e2b20(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004c6920(void);
extern void __cdecl FUN_006d1730(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004e06b0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004d21c0(void);

extern int   g_007dab44;   /* DAT_007dab44 */
extern int   g_007dab40;   /* DAT_007dab40 */
extern int   g_00840048;   /* DAT_00840048 */
extern int   g_007dc6d4;   /* DAT_007dc6d4 */
extern char  g_007dc694[]; /* DAT_007dc694 */

__declspec(naked) void FUN_004e9f10(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        sub     esp, 0x68
        push    ebx
        mov     ebx, dword ptr [g_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx + 0x1c]
        push    edi
        xor     ecx, 0x85739531
        push    esi
        add     ecx, 0x18c
        call    FUN_004179b0
        test    dword ptr [esi + 0x14c], 0x180
        jnz     L9F4F
        mov     ecx, esi
        call    FUN_004e9d00
L9F4F:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [esi + 0x14c]
        mov     edi, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        mov     cl, byte ptr [esi + 0x151]
        and     edx, 0xffffff7f
        xor     eax, edi
        mov     edi, dword ptr [eax + 0x1c]
        or      edx, 0x100
        mov     dword ptr [esi + 0x14c], edx
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x150]
        xor     edx, edx
        xor     edi, 0x85739531
        mov     dl, byte ptr [edi + 0x16a]
        mov     byte ptr [esp + 0x14], cl
        and     ecx, 0xff
        push    ebp
        mov     edi, ebx
        and     edi, 0xff
        imul    edx, edi
        add     edx, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004e2b20
        push    0x1
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_004d1f80
        lea     eax, [esp + 0x34]
        push    eax
        call    FUN_004af200
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi + 0x17c]
        mov     ebp, dword ptr [eax + 0x144]
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], 0x40
L9FED:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ebp]
        push    0x0
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        call    FUN_004c6920
        mov     edx, dword ptr [edi]
        add     esp, 0xc
        push    eax
        mov     ecx, edi
        mov     dword ptr [edi + 0x14c], eax
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L9FED
        mov     edi, dword ptr [esi + 0x17c]
        mov     ecx, edi
        call    dword ptr [edi + 0x1c]
        mov     ecx, dword ptr [g_00840048]
        test    ecx, ecx
        pop     ebp
        jz      LEA048
        mov     eax, dword ptr [esp + 0x14]
        shl     al, 0x3
        shl     bl, 0x3
        push    eax
        push    ebx
        push    edi
        call    FUN_006d1730
LEA048:
        mov     esi, dword ptr [esi + 0x164]
        push    offset g_007dc694
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x1c], 0x18
        mov     dword ptr [esp + 0x20], 0x5
        mov     dword ptr [esp + 0x24], 0x2
        mov     dword ptr [esp + 0x28], 0x0
        call    FUN_004ea0f0
        mov     byte ptr [esp + 0x2c], 0x1
        test    esi, esi
        jz      LEA0D6
LEA081:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      LEA0D6
        lea     ebx, [edi + 0x20]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      LEA0A4
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
LEA0A4:
        mov     al, byte ptr [edi + 0x14]
        push    0xbff00000
        push    0x0
        mov     byte ptr [esp + 0x30], al
        mov     cx, word ptr [edi + 0x16]
        lea     edx, [esp + 0x20]
        push    edx
        mov     word ptr [esp + 0x36], cx
        mov     ecx, dword ptr [g_007dc6d4]
        push    edi
        call    FUN_004e06b0
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel (off-by-4: call relocs between branch and target) */
        __emit 0xAB
LEA0D6:
        lea     ecx, [esp + 0x30]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x68
        ret
    }
}
