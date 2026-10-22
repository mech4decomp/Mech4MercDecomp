/*
 * FUN_006504f0 (62 B) — constructor-like helper.
 *
 * Calls FUN_00650120(param_1, &g_80da24[g_8058c0]), then fills fields
 * 0x18/0x1c/0x20/0x28/0x30/0x3c/0x40 of the returned object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058c0;
extern int g_80da24;
extern void * __cdecl FUN_00650120(void *a, void *b);

__declspec(naked) void FUN_006504f0(void)
{
    __asm {
        mov     eax, dword ptr [g_8058c0]
        mov     edx, dword ptr [esp + 0x4]
        lea     ecx, [eax*4 + g_80da24]
        push    ecx
        push    edx
        call    FUN_00650120
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x18], ecx
        mov     cl, byte ptr [esp + 0x18]
        mov     byte ptr [eax + 0x20], cl
        xor     ecx, ecx
        add     esp, 0x8
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x40], ecx
        mov     dword ptr [eax + 0x3c], ecx
        ret
    }
}
