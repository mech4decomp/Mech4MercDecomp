/*
 * FUN_004ba600 (245 B) — MLR subsystem __thiscall ctor. RET 0x10.
 *
 * CFLAGS: /O1
 */

extern int g_007daa54;
extern void FUN_004c1470(void);

__declspec(naked) void FUN_004ba600(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [g_007daa54]
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x14]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_004c1470
        mov     eax, 0xbf800000
        lea     edi, [esi + 0x184]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi+0x8], eax
        mov     dword ptr [edi+0x4], eax
        mov     dword ptr [edi+0xc], eax
        mov     eax, dword ptr [esi+0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + 0x7b34c8]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 0x2
        mov     dword ptr [esi+0x1c], edx
        mov     edx, dword ptr [ecx + 0x7b3b28]
        shr     eax, 0xa
        mov     dword ptr [esi+0x130], edx
        mov     edx, dword ptr [ecx + 0x7b3b2c]
        mov     ecx, dword ptr [ecx + 0x7b3b30]
        and     eax, 0x1
        mov     dword ptr [esi+0x134], edx
        mov     edx, dword ptr [eax*4 + 0x7b35c8]
        mov     al, byte ptr [esp+0x1c]
        test    al, al
        mov     dword ptr [esi], 0x77107c
        mov     dword ptr [esi+0x138], ecx
        mov     dword ptr [esi+0x13c], edx
        jz      L_4ba6c2
        mov     eax, dword ptr [ebx]
        push    0xc
        lea     ecx, [esi + 0x178]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x10
        push    edi
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
L_4ba6c2:
        mov     eax, 0x3f800000
        mov     dword ptr [edi], eax
        mov     dword ptr [esi+0x178], eax
        mov     dword ptr [esi+0x17c], eax
        mov     dword ptr [esi+0x180], eax
        mov     dword ptr [esi+0x188], eax
        mov     dword ptr [esi+0x18c], eax
        mov     dword ptr [esi+0x190], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
