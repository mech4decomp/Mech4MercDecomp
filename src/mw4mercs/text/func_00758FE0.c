/*
 * FUN_00758FE0 (364 B) — __thiscall (ECX = this, RET 0x20, 8 stack params).
 *
 * In-.text data block at 0x758FD1 (368 B). Allocates a 0x88-byte object
 * (FUN_006f3c80), then fills it with FPU-computed transform/scale values
 * derived from the 8 integer params (fild qword from a 64-bit local,
 * fdivr by 0x76d064, fmul chain), and links it into this+0x18. Trailing
 * 4 NOPs excluded from the slice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006f3c80(int, int);

extern int   g_8492fc;   /* DAT_008492fc */
extern float g_76d064;   /* DAT_0076d064 */

__declspec(naked) void __cdecl FUN_00758FE0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_8492fc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    0x88
        mov     esi, ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [eax + 0x84], ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], ecx
        add     edi, ebx
        fst     dword ptr [eax]
        mov     ebp, dword ptr [esp + 0x34]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], ecx
        fst     dword ptr [esp + 0x1c]
        add     edx, edi
        fstp    dword ptr [eax + 4]
        add     ebx, ebp
        mov     dword ptr [eax + 0x68], ecx
        fstp    dword ptr [eax + 0x20]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        fst     dword ptr [eax + 0x24]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        fst     dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        fstp    dword ptr [eax + 0x40]
        mov     dword ptr [eax + 0x60], edx
        mov     edx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax + 0x44]
        mov     dword ptr [eax + 0x64], edx
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x10], edx
        fild    qword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        fdivr   dword ptr [g_76d064]
        add     edi, edx
        fstp    dword ptr [esp + 0x2c]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x2c]
        fst     dword ptr [eax + 0x18]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x1c]
        fstp    dword ptr [eax + 0x1c]
        fstp    dword ptr [eax + 0x38]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x2c]
        fst     dword ptr [eax + 0x3c]
        fild    qword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        fstp    dword ptr [eax + 0x58]
        mov     dword ptr [eax + 0x78], edx
        mov     edx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax + 0x5c]
        mov     dword ptr [eax + 0x7c], edx
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0x74], ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     ecx, 0x3f800000
        pop     edi
        mov     dword ptr [eax + 0x6c], ecx
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x18]
        or      edx, 0xffffffff
        mov     dword ptr [esi + 0x18], eax
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 0x70], edx
        mov     dword ptr [eax + 0x50], edx
        mov     dword ptr [eax + 0x30], edx
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x80], ecx
        pop     ebx
        add     esp, 8
        ret     0x20
    }
}
