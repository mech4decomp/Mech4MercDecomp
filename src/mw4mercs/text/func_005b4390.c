/*
 * FUN_005b4390 (62 B) — __thiscall method, no stack params, plain RET.
 *
 * Calls FUN_005f86c0(), then a virtual method on the sub-object at this+0x78.
 * If the returned object's byte at +0x88 is nonzero, calls a virtual method
 * on the object at this+0x2f4 with args (10,0,0) and sets this+0x564=1;
 * otherwise sets this+0x564=0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f86c0(void);

__declspec(naked) void __stdcall FUN_005b4390(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f86c0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     cl, byte ptr [eax + 0x88]
        test    cl, cl
        jz      setzero
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     edx, dword ptr [ecx]
        push    0
        push    0
        push    0xa
        mov     byte ptr [esi + 0x564], 0x1
        call    dword ptr [edx + 0x8]
        pop     esi
        ret
setzero:
        mov     byte ptr [esi + 0x564], 0x0
        pop     esi
        ret
    }
}
