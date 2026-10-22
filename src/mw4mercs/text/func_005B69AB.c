/*
 * FUN_005B69AB (611 B) — __thiscall method on an object (this in ecx).
 *
 * Structurally identical to FUN_005A9B9B: reads a stream vtable at
 * [this+0x78], compares a 16-bit tag at [stream+0x90] against DAT_007db0ac /
 * DAT_007db0ae, and builds a large argument structure on the stack, calling
 * FUN_004da920, FUN_00767400, FUN_00507f90, FUN_004e8dc0, FUN_00419480,
 * FUN_00419460, FUN_0040d030, FUN_0041fde0, FUN_0041c680, FUN_0041fd80,
 * FUN_005f07c0, FUN_0059afb0, FUN_004ea0f0, FUN_005922e0, FUN_0041e690,
 * FUN_004cec10, FUN_004d9910, FUN_0041e710. Ends with `ret 8`.
 *
 * __thiscall (this in ecx), returns via ret 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;  /* 0x007db0ac */
extern unsigned short g_7db0ae;  /* 0x007db0ae */
extern void *g_7db098;           /* 0x007db098 */
extern void *g_7dab44;           /* 0x007dab44 */
extern void *g_7dab40;           /* 0x007dab40 */

extern void *__cdecl FUN_004da920(void *p);
extern void __cdecl FUN_00767400(void *p);
extern void *__cdecl FUN_00507f90(void *p);
extern void __cdecl FUN_004e8dc0(void *a, void *b);
extern void __cdecl FUN_00419480(void *a, void *b);
extern void __cdecl FUN_00419460(void *p);
extern void __cdecl FUN_0040d030(void *a, void *b);
extern void __cdecl FUN_0041fde0(void *a, void *b, int c, int d, int e);
extern void __cdecl FUN_0041c680(void *a, void *b, void *c);
extern void __cdecl FUN_0041fd80(void *p);
extern void *__cdecl FUN_005f07c0(void);
extern void __cdecl FUN_0059afb0(void *p);
extern void __cdecl FUN_004ea0f0(void *a, void *b);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0041e690(void *a, void *b, void *c, int d);
extern void *__cdecl FUN_004cec10(void *p);
extern void __cdecl FUN_004d9910(void *a, void *b, void *c, int d);
extern void __cdecl FUN_0041e710(void *p);

__declspec(naked) void FUN_005B69AB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1c4
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x78]
        push    esi
        lea     ecx, [ebp + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ebx, eax
        mov     cx, word ptr [ebx + 0x90]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [ebx + 0x90]
        mov     dword ptr [esp + 0x24], eax
        jne     L_5b69f2
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_5b6c01
L_5b69f2:
        push    eax
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x44]
        call    FUN_00767400
        mov     ecx, dword ptr [ebp + 0x198]
        lea     eax, [esp + 0xf0]
        push    eax
        call    FUN_00507f90
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0xc0]
        rep movsd
        mov     ecx, dword ptr [ebp + 0x1d4]
        mov     eax, dword ptr [ecx + 0x18]
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        call    FUN_004e8dc0
        lea     ecx, [esp + 0xc0]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        fld     dword ptr [esp + 0x28]
        push    0x7b9460
        fsub    dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x94]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x40]
        call    FUN_00419460
        lea     edx, [esp + 0xc0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x94]
        call    FUN_0040d030
        push    0
        push    1
        push    2
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_0041fde0
        lea     edx, [esp + 0x90]
        push    edx
        lea     eax, [ebx + 0x78]
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_0041c680
        mov     ecx, dword ptr [ebx + 0x84]
        mov     edx, dword ptr [ebx + 0x88]
        mov     eax, dword ptr [ebx + 0x8c]
        mov     dword ptr [esp + 0x40], ecx
        lea     ecx, [ebp + 0x214]
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x48], eax
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebx + 0x30]
        mov     edx, dword ptr [ebx + 0x68]
        mov     eax, dword ptr [ebx + 0x64]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x60]
        push    edx
        mov     edx, dword ptr [ebx + 0x5c]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_005f07c0
        mov     ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov     eax, dword ptr [ebx + 0x58]
        mov     ecx, dword ptr [ebx + 0x50]
        mov     edx, dword ptr [ebx + 0x54]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x80]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x198]
        push    0
        push    -1
        push    4
        push    0
        lea     edx, [esp + 0x12c]
        push    edx
        call    FUN_00507f90
        mov     ecx, dword ptr [esp + 0x50]
        push    eax
        mov     eax, dword ptr [esp + 0x64]
        push    eax
        push    2
        push    ecx
        push    0
        push    2
        push    0xb4
        lea     ecx, [esp + 0x178]
        call    FUN_005922e0
        mov     edx, dword ptr [esp + 0x120]
        push    0
        push    edx
        lea     eax, [esp + 0x128]
        push    eax
        lea     ecx, [esp + 0x7c]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     ecx, dword ptr [g_7dab44]
        mov     ebx, dword ptr [ecx]
        mov     edx, dword ptr [g_7dab40]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0x70]
        call    FUN_0041e710
L_5b6c01:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c4
        ret     8
    }
}
