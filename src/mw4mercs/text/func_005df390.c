/*
 * FUN_005df390 (131 B) — __thiscall (ECX = this), RET 0.
 *
 * If byte [this+0x41C] is set, returns. Otherwise ORs 0x800000 into
 * [this+0x10], calls FUN_004daa20(this+0x454), a virtual method via
 * [vtable+0x48], and FUN_004e2690 with a decoded pointer. Then checks
 * byte [decoded+0x2A1] and calls FUN_005e1ee0 or FUN_005e1f10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004daa20(void *ptr);
extern void __stdcall FUN_004e2690(void *this);
extern void __stdcall FUN_005e1ee0(void *this);
extern void __stdcall FUN_005e1f10(void *this);

__declspec(naked) void __stdcall FUN_005df390(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x41C]
        test    al, al
        jnz     L_411
        mov     edx, dword ptr [esi + 0x10]
        lea     eax, [esi + 0x454]
        or      edx, 0x800000
        push    eax
        mov     dword ptr [esi + 0x10], edx
        call    FUN_004daa20
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1C]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004e2690
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x2A1], 0x1
        mov     byte ptr [esi + 0x41C], 0x1
        mov     ecx, esi
        jnz     L_40c
        call    FUN_005e1ee0
        pop     esi
        ret
    L_40c:
        call    FUN_005e1f10
    L_411:
        pop     esi
        ret
    }


}
