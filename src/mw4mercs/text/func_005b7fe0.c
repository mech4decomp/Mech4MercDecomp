/*
 * FUN_005b7fe0 (106 B) — __fastcall (ECX = this). Constructor.
 *
 * Initializes an object: calls FUN_00415180(DAT_007b8c10), zeroes fields,
 * sets vtable 0x7869d0, calls FUN_00707e70(0) twice for doubles, then
 * branches on FUN_00637b40() result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415180(void);
extern double __fastcall FUN_00707e70(void);
extern int __fastcall FUN_00637b40(void);
extern double __fastcall FUN_00637a20(void);

__declspec(naked) void *__fastcall FUN_005b7fe0(void)
{
    

extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x7869d0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x10]
        call    FUN_00637b40
        cmp     eax, ebx
        mov     byte ptr [esi + 0x30], bl
        jnz     L_8030
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x24], 0x40240000
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    L_8030:
        push    0xe2
        mov     ecx, eax
        call    FUN_00637a20
        fstp    qword ptr [esi + 0x20]
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }


}
