/*
 * FUN_006102C0 (166 B) — Texture object constructor.
 *
 * __fastcall (ECX = this), RET. Builds a "review map" texture object:
 * calls FUN_00561430, sets vtable 0x78C114, formats a filename via
 * sprintf (IAT 0x0076B420) into a 256-byte stack buffer, calls
 * FUN_00561600 with a fixed set of float/zero args, then fills
 * float fields +0x14..+0x28. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int  g_007ddde0;
extern unsigned char g_007f27f0;
extern void         *g_0076b420;   /* IAT: sprintf */
extern void __cdecl  FUN_00561430(void);
extern void __cdecl  FUN_00561600(void);

__declspec(naked) void __fastcall FUN_006102c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        sub     esp, 0x100
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        mov     al, byte ptr [g_007f27f0]
        test    al, al
        mov     dword ptr [esi], 0x78c114
        jnz     l_else
        lea     ecx, [esp + 4]
        push    0x78c0ec
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 8
        jmp     l_common
    l_else:
        push    0x7f27f0
        lea     edx, [esp + 8]
        push    0x78c0d4
        push    edx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
    l_common:
        push    0
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0
        push    0
        push    0
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_00561600
        mov     eax, 0x43c80000
        mov     ecx, 0x3f666666
        mov     dword ptr [esi + 0x14], 0x42040000
        mov     dword ptr [esi + 0x18], 0x41200000
        mov     dword ptr [esi + 0x1c], ecx
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], ecx
        mov     eax, esi
        pop     esi
        add     esp, 0x100
        ret
    }
}
