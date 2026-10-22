/*
 * FUN_004f4ec0 (189 B) — MLR/Adept update/tick handler. __thiscall
 * (ECX=this), RET 0x8 (2 args). Conditionally calls FUN_0041fd80 /
 * FUN_004f5430 / FUN_004f5630, then FUN_004fae10, and dispatches on a
 * member value (5/6) to virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);
extern void FUN_004f5430(void);
extern void FUN_004f5630(void);
extern void FUN_004fae10(void);

__declspec(naked) void FUN_004f4ec0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x10]
        shr     eax, 0x18
        test    al, 0x1
        jz      L4f12
        lea     ecx, [esi+0x210]
        call    FUN_0041fd80
        test    eax, eax
        jz      L4ee5
        mov     ecx, esi
        call    FUN_004f5430
        jmp     L4f12
L4ee5:
        lea     ecx, [esi+0x218]
        call    FUN_0041fd80
        test    eax, eax
        jz      L4efd
        mov     ecx, esi
        call    FUN_004f5630
        jmp     L4f12
L4efd:
        mov     ecx, dword ptr [esi+0xe0]
        cmp     dword ptr [ecx+0x14], 0x5
        jz      L4f12
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x5
        call    dword ptr [edx+0x4]
L4f12:
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004fae10
        mov     ecx, dword ptr [esi+0xe0]
        mov     eax, dword ptr [ecx+0x14]
        sub     eax, 0x5
        jz      L4f55
        dec     eax
        jnz     L4f79
        mov     al, byte ptr [esi+0x250]
        test    al, al
        jnz     L4f79
        mov     eax, dword ptr [esi+0x254]
        test    eax, eax
        jnz     L4f79
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x5
        call    dword ptr [edx+0x4]
        pop     esi
        ret     0x8
L4f55:
        mov     al, byte ptr [esi+0x250]
        test    al, al
        jnz     L4f79
        mov     eax, dword ptr [esi+0x254]
        test    eax, eax
        jnz     L4f79
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x4
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x18]
L4f79:
        pop     esi
        ret     0x8
    }
}
