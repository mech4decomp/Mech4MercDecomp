/*
 * FUN_00555D80 (171 B) — Checks state flags and capability, then processes
 * a sub-object at [this+0x6a8], calling FUN_005E1FA0 instead of FUN_005E1F50
 * (variant of FUN_00555CD0).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_0061acf0(int);
extern int __stdcall FUN_0061ad20(int);
extern void __stdcall FUN_0041fcb0(void *);
extern int __stdcall FUN_005e1fa0(void);
extern void __stdcall FUN_0041fcd0(void *, int);
extern int __stdcall FUN_0041fd80(void *);
extern void __stdcall FUN_005c01d0(int);

__declspec(naked) void __stdcall FUN_00555D80(int param1)
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
        push    0x100
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      loc_ret
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     loc_ret
        push    edi
        lea     edi, [esi + 0x6A8]
        mov     ecx, edi
        call    FUN_0041fcb0
        call    FUN_005e1fa0
        test    eax, eax
        jz      loc_skip_push
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
loc_skip_push:
        mov     eax, dword ptr [esi + 0x2D0]
        test    eax, eax
        jz      loc_check_empty
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [esi + 0x2D0]
        push    eax
        call    FUN_005c01d0
loc_check_empty:
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        pop     edi
        jnz     loc_ret
        mov     ecx, dword ptr [esi + 0xE0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x2
        call    dword ptr [eax + 0x4]
loc_ret:
        pop     esi
        ret     0x4
    }
}
