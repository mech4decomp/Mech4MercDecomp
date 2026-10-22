/*
 * FUN_005bfef0 (72 B) — Constructor.
 *
 * Calls FUN_005c0570(4 params) on this, sets three fields at +0x17C/0x180/
 * 0x184 to 0x4B, sets vtable pointer [this]=0x7872E8, clears byte at
 * +0x6AC. Returns this.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0570(void *p1, void *p2, void *p3, void *p4);

__declspec(naked) void *FUN_005bfef0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005c0570
        mov     eax, 0x4b
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x180], eax
        mov     dword ptr [esi + 0x184], eax
        mov     dword ptr [esi], 0x7872e8
        mov     byte ptr [esi + 0x6ac], 0x0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
