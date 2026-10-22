/*
 * FUN_004D2380 (142 B) — __thiscall (ECX = this, RET 4, 1 stack param).
 *
 * In-.text data block at 0x4D2378 (368 B) contains TWO functions; this is
 * the first (0x4D2380-0x4D240B). Loads a config object: if the stack param
 * is non-null, copies fields [0x1a]/[0x10] into this+0x40/this+0x20 and
 * clears global 0x7db0b4; else builds a temp object (vtable 0x7725a0) via
 * FUN_00417170/0x4171e0/0x417280, stores the result in 0x7db0b4, and
 * copies its fields. NOTE: 0x4D2410 is a second function in the same block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00413dc0(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004171b0(void);

extern int g_7db0b4;   /* DAT_007db0b4 */
extern int g_7db0b8;   /* DAT_007db0b8 */

__declspec(naked) void __cdecl FUN_004D2380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x14
        test    eax, eax
        push    esi
        mov     esi, ecx
        je      L23b4
        mov     cx, word ptr [eax + 0x1a]
        mov     edx, dword ptr [eax + 0x10]
        mov     word ptr [esi + 0x40], cx
        lea     ecx, [esi + 0x20]
        mov     dword ptr [g_7db0b4], 0
        mov     dword ptr [ecx], edx
        call    FUN_00413dc0
        pop     esi
        add     esp, 0x14
        ret     4
L23b4:
        mov     eax, dword ptr [g_7db0b8]
        add     eax, 0x14
        push    eax
        lea     ecx, [esp + 8]
        call    FUN_00417170
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], 0x7725a0
        call    FUN_004171e0
        lea     ecx, [esp + 4]
        call    FUN_00417280
        test    eax, eax
        mov     dword ptr [g_7db0b4], eax
        je      L23fe
        mov     cx, word ptr [eax + 0x1a]
        mov     edx, dword ptr [eax + 0x10]
        mov     word ptr [esi + 0x40], cx
        lea     ecx, [esi + 0x20]
        mov     dword ptr [ecx], edx
        call    FUN_00413dc0
L23fe:
        lea     ecx, [esp + 4]
        call    FUN_004171b0
        pop     esi
        add     esp, 0x14
        ret     4
    }
}
