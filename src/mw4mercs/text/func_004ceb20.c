/*
 * FUN_004ceb20 (115 B) — MLR network subsystem object init (__thiscall).
 * Sets up a local vtable (0x771bd4), iterates a list calling virtual
 * methods, copies a byte, zeroes a 0x800-dword buffer, resets a counter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00417640(void);
extern void FUN_00417740(void);
extern void FUN_004176c0(void);
extern void FUN_004176a0(void);

__declspec(naked) void FUN_004ceb20(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        push    edi
        mov     esi, ecx
        push    0x1
        lea     eax, [esi + 0x14]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00417640
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0x771bd4
        call    FUN_00417740
        test    eax, eax
        jz      loc_69
loc_4b:
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
        lea     ecx, [esp + 0x8]
        call    FUN_004176c0
        lea     ecx, [esp + 0x8]
        call    FUN_00417740
        test    eax, eax
        jnz     loc_4b
loc_69:
        mov     al, byte ptr [esi + 0x28]
        mov     byte ptr [esi + 0x34], al
        xor     eax, eax
        lea     edi, [esi + 0x48]
        mov     ecx, 0x800
        mov     word ptr [esi + 0x36], 0x0
        rep stosd
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esi + 0x24], eax
        call    FUN_004176a0
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
    }
}
