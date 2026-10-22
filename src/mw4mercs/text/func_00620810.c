/*
 * FUN_00620810 (64 B) — __thiscall helper.
 *
 * If this+0x15 is nonzero, calls sprintf(&DAT_007f29a4, "ENTER (%d) %s:%s",
 * ...) via IAT 0x0076b420, then FUN_0061fc80(&DAT_007f29a4). Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;
extern void __cdecl FUN_0061fc80(unsigned int a);

__declspec(naked) void FUN_00620810(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x15]
        test    al, al
        jz      L_done
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esi]
        push    edx
        mov     edx, dword ptr [eax]
        lea     ecx, [eax + 0x4]
        push    ecx
        push    edx
        push    0x78cae4
        push    0x7f29a4
        call    dword ptr [g_0076b420]
        add     esp, 0x14
        push    0x7f29a4
        mov     ecx, esi
        call    FUN_0061fc80
    L_done:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
