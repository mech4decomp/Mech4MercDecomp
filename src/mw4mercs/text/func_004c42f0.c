/*
 * FUN_004c42f0 (213 B) — MLR GroupElement __thiscall constructor.
 * Calls FUN_004c66b0, fills object fields from lookup tables indexed
 * by bits of field 0x18, does a virtual call, then loops calling
 * FUN_004c6920/FUN_004c4570.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b3920;
extern int g_007b3b28;
extern int g_007b3b2c;
extern int g_007b3b30;
extern int g_007b3a20;

extern void __cdecl FUN_004c66b0(void);
extern void __cdecl FUN_004c6920(void);
extern void __cdecl FUN_004c4570(void);

__declspec(naked) void FUN_004c42f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004c66b0
        mov     eax, dword ptr [esi+0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_007b3920]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 0x2
        mov     dword ptr [esi+0x1c], edx
        mov     edx, dword ptr [ecx + g_007b3b28]
        mov     dword ptr [esi+0x130], edx
        mov     edx, dword ptr [ecx + g_007b3b2c]
        mov     ecx, dword ptr [ecx + g_007b3b30]
        shr     eax, 0xa
        mov     dword ptr [esi+0x138], ecx
        and     eax, 0x1
        push    0x4
        lea     ecx, [esp+0x1c]
        mov     dword ptr [esi+0x134], edx
        mov     edx, dword ptr [eax*4 + g_007b3a20]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     dword ptr [esi+0x144], 0x0
        mov     ecx, edi
        mov     dword ptr [esi+0x148], 0x0
        mov     dword ptr [esi], 0x7716ec
        mov     dword ptr [esi+0x13c], edx
        call    dword ptr [eax+0x20]
        mov     eax, dword ptr [esp+0x18]
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     dword ptr [esp+0x18], eax
        jz      L_004c43bd
    L_004c439a:
        push    0x0
        push    ebx
        push    edi
        call    FUN_004c6920
        add     esp, 0xc
        push    eax
        mov     ecx, esi
        call    FUN_004c4570
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [esp+0x18], eax
        jnz     L_004c439a
    L_004c43bd:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
