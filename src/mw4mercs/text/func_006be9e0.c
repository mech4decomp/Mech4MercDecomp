/*
 * FUN_006be9e0 (383 B) — __stdcall, RET 0x14 (5 dword params).
 * Builds a float array on the stack via FILD/FST/FSTP and calls
 * FUN_00713ae0(&local, 4). Guarded by a bounds check against DAT_00858944.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00713cc0(int a, int b);
extern void __stdcall FUN_00713ae0(void *p, int n);

extern int g_00858944;

__declspec(naked) void __stdcall FUN_006be9e0(void)
{
    __asm {
        sub     esp, 0x88
        push    esi
        xor     esi, esi
        push    esi
        push    0x1
        call    FUN_00713cc0
        push    0x3
        push    0xd
        call    FUN_00713cc0
        push    0x2
        push    0xb
        call    FUN_00713cc0
        mov     edx, dword ptr [esp + 0x94]
        mov     eax, dword ptr [g_00858944]
        cmp     edx, eax
        jnc     L1
        mov     ecx, dword ptr [esp + 0x9c]
        cmp     ecx, eax
        jc      L2
        lea     ecx, [eax + -0x1]
L2:
        mov     eax, dword ptr [esp + 0x90]
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [esp + 0xa0]
        mov     dword ptr [esp + 0x8], esi
        fild    qword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x4], edx
        mov     edx, dword ptr [esp + 0x98]
        mov     dword ptr [esp + 0x8], esi
        fst     dword ptr [esp + 0xc]
        push    0x4
        fild    qword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x18], 0x0
        fst     dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], 0x3f800000
        fild    qword ptr [esp + 0x8]
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], esi
        fst     dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x28], 0x0
        mov     edx, dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x8], ecx
        fstp    dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x50], edx
        fild    qword ptr [esp + 0x8]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x30], 0x0
        fst     dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x3c], 0x0
        mov     ecx, dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x40], 0x3f800000
        fstp    dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], esi
        mov     dword ptr [esp + 0x4c], 0x3f800000
        mov     dword ptr [esp + 0x50], 0x0
        mov     dword ptr [esp + 0x5c], 0x0
        mov     dword ptr [esp + 0x60], 0x3f800000
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x6c], 0x3f800000
        mov     dword ptr [esp + 0x70], 0x3f800000
        mov     dword ptr [esp + 0x78], ecx
        mov     dword ptr [esp + 0x7c], 0x0
        mov     dword ptr [esp + 0x80], 0x3f800000
        mov     dword ptr [esp + 0x84], eax
        mov     dword ptr [esp + 0x88], esi
        mov     dword ptr [esp + 0x8c], 0x0
        mov     dword ptr [esp + 0x90], 0x3f800000
        call    FUN_00713ae0
L1:
        pop     esi
        add     esp, 0x88
        ret     0x14
    }
}
