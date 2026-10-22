/*
 * FUN_004cd7a0 (315 B) — MLR subsystem: __stdcall (ret 4) helper that
 * removes/registers an object slot (indexed by byte at [edi+0x28]) from
 * the per-type table, updates global hash bookkeeping (0x7dab40/0x7dab44),
 * and calls FUN_004cdff0. Uses ESP-relative locals (EBP = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void* g_0076b420;   /* IAT function pointer */

extern void FUN_004cdf50(void);
extern void FUN_004d6350(void);
extern void FUN_004cdff0(void);

__declspec(naked) void FUN_004cd7a0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     esp, 0x104
        push    ebp
        push    edi
        mov     ebp, ecx
        push    eax
        call    FUN_004cdf50
        mov     edi, eax
        test    edi, edi
        jz      L_4cd8d0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edi+0x30]
        push    ebx
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        push    esi
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        push    0x7545
        call    dword ptr [edx+0x34]
        push    eax
        lea     eax, [esp+0x1c]
        push    eax
        call    dword ptr [g_0076b420]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        add     esp, 0xc
        lea     edx, [esp+0x14]
        push    edx
        push    0
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax+0x30]
        mov     al, byte ptr [edi+0x28]
        mov     byte ptr [esp+0x10], al
        mov     esi, dword ptr [esp+0x10]
        and     esi, 0xff
        lea     ecx, [esi+2]
        shl     ecx, 4
        lea     ebx, [ecx+ebp]
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        jz      L_4cd859
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        xor     ecx, ecx
        mov     eax, esi
        shl     eax, 4
        add     eax, ebp
        mov     dword ptr [ebx], ecx
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x18], 0xffffffff
        mov     dword ptr [eax+0x1c], ecx
L_4cd859:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edi
        push    esi
        call    dword ptr [eax+0x3c]
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jz      L_4cd8bc
L_4cd89d:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jnz     L_4cd89d
L_4cd8bc:
        mov     ecx, ebp
        mov     dword ptr [ebp+esi*4+0x1818], 0
        call    FUN_004cdff0
        pop     esi
        pop     ebx
L_4cd8d0:
        pop     edi
        pop     ebp
        add     esp, 0x104
        ret     0x4
    }
}
