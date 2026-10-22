/*
 * FUN_00555F30 (130 B) — Checks state flags and capability, then processes
 * a sub-object at [this+0x6a0], calls FUN_004C3D50, and conditionally
 * calls FUN_0055B500.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_0061acf0(int);
extern int __stdcall FUN_0061ad20(int);
extern void __stdcall FUN_0041fcb0(void *);
extern void __stdcall FUN_004c3d50(int);
extern int __stdcall FUN_005ba040(void);
extern void __stdcall FUN_0055b500(int);

__declspec(naked) void __stdcall FUN_00555F30(int param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     loc_ret
        push    0x20
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      loc_ret
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     loc_ret
        lea     ecx, [esi + 0x6A0]
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esi + 0x6B0]
        push    0x0
        call    FUN_004c3d50
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x3D4]
        test    ecx, ecx
        jz      loc_ret
        call    FUN_005ba040
        test    eax, eax
        jz      loc_ret
        push    eax
        mov     ecx, esi
        call    FUN_0055b500
loc_ret:
        pop     esi
        ret     0x4
    }
}
