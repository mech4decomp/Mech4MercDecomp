/*
 * FUN_005B06F0 (870 B) — __thiscall (ECX = this), RET 0x14. Object
 * transform/position update.
 *
 * Reads a double arg, computes a delta against this+0xe4, queries globals
 * 0x7b8d68/6c/70, does FPU comparisons (with fnstsw/test-ah flag checks),
 * builds several 3-vector transforms via matrix helpers (FUN_0041c680,
 * FUN_0041b140, FUN_0041afd0, ...), copies a 12-dword constant block from
 * 0x7b9460, and calls virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7b8d6c;
extern int   g_7b8d70;
extern int   g_7b8d68;

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_005B06F0(void)
{
    __asm {
        sub     esp, 0xe8
        fld     qword ptr [esp + 0xec]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xd8]
        fsub    qword ptr [ebp + 0xe4]
        mov     edx, dword ptr [ebp + 0x78]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x1c]
        lea     ecx, [ebp + 0x78]
        push    esi
        fstp    dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0xcc], eax
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [g_7b8d6c]
        mov     edx, dword ptr [g_7b8d70]
        mov     esi, eax
        mov     eax, dword ptr [g_7b8d68]
        xor     ebx, ebx
        push    ebx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_00707e70
        fcomp   qword ptr [ebp + 0x5ec]
        mov     dword ptr [esp + 0x14], 0x41700000
        __emit 0xDF          /* FNSTSW AX no-WAIT (MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x41 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x41
        je      L_5b076a
        mov     dword ptr [esp + 0x14], ebx
L_5b076a:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esi + 0x328]
        __emit 0xDF          /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_5b0785
        mov     eax, dword ptr [esi + 0x328]
        mov     dword ptr [esp + 0x14], eax
L_5b0785:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x168], ecx
        mov     ecx, dword ptr [ebp + 0xd8]
        push    edi
        add     ecx, 0x80
        mov     dword ptr [ebp + 0x16c], edx
        push    ecx
        lea     edx, [esp + 0x18]
        lea     esi, [ebp + 0x198]
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x170], eax
        call    FUN_0041c680
        mov     eax, dword ptr [ebp + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x54]
        lea     edi, [ebp + 0x1a4]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebp + 0x434], ebx
        mov     dword ptr [esp + 0x58], 0
        mov     dword ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x60], 0
        mov     dword ptr [ebp + 0x174], ebx
        mov     dword ptr [ebp + 0x178], ebx
        mov     dword ptr [ebp + 0x17c], ebx
        call    FUN_0041c680
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [edi]
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0xec]
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x74]
        call    FUN_0041b140
        lea     edi, [ebp + 0xf4]
        push    edi
        lea     ecx, [esp + 0xdc]
        call    FUN_0041afd0
        lea     eax, [esp + 0xe8]
        push    eax
        lea     ecx, [esp + 0xdc]
        push    ecx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041b320
        lea     ecx, [esp + 0x80]
        call    FUN_00419e70
        lea     edx, [esp + 0xb0]
        push    edx
        lea     ecx, [esp + 0x84]
        call    FUN_0041a160
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi]
        lea     eax, [esp + 0x80]
        push    eax
        lea     ecx, [esp + 0x60]
        fstp    dword ptr [esp + 0x60]
        push    ecx
        fld     dword ptr [esp + 0x18]
        lea     ecx, [esp + 0x40]
        fmul    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x68]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x6c]
        call    FUN_0041c680
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_00419480
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x44]
        fst     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x48]
        fadd    dword ptr [esp + 0x3c]
        lea     ecx, [esp + 0xc0]
        fstp    dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x9c], edx
        fadd    dword ptr [esp + 0x4c]
        mov     edx, dword ptr [ebp]
        fstp    dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0xac], eax
        lea     eax, [esp + 0x74]
        fstp    dword ptr [esp + 0x8c]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 0x164]
        lea     ecx, [esp + 0xb0]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_0041ac80
        lea     edx, [esp + 0xc0]
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x74]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x80]
        fstp    dword ptr [esp + 0x2c]
        rep movsd
        fld     dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x78]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x7c]
        fstp    dword ptr [esp + 0x34]
        lea     ecx, [esp + 0xb0]
        push    ecx
        lea     ecx, [esp + 0x84]
        call    FUN_0041a160
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x8c], edx
        lea     edx, [esp + 0x80]
        mov     dword ptr [esp + 0xac], ecx
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0xa0], eax
        call    FUN_004daa20
        fld     dword ptr [esp + 0xd0]
        pop     edi
        fcomp   dword ptr [ebp + 0x51c]
        __emit 0xDF          /* FNSTSW AX no-WAIT */
        __emit 0xE0
        __emit 0xF6          /* TEST AH,0x1 */
        __emit 0xC4
        __emit 0x01
        jne     L_5b0a4a
        lea     esi, [ebp + 0x5ac]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_5b0a0e
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_5b0a0e:
        lea     esi, [ebp + 0x5b4]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_5b0a36
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    ebx
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
L_5b0a36:
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    9
        call    dword ptr [eax + 4]
        mov     byte ptr [ebp + 0x514], bl
L_5b0a4a:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xe8
        ret     0x14
    }
}
