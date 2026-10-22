/*
 * FUN_00454f60 (227 B) — MLR material/render helper constructor.
 * __thiscall (ECX = this). Sets up sub-objects, reads 6 floats via a
 * virtual stream interface, computes a scale factor and stores it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b9580;
extern float g_0076eb4c;

extern void __cdecl FUN_00458360(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00454f60(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    esi
        push    edi
        push    ebp
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_00458360
        lea     ecx, [esi+0x68]
        call    FUN_004911e0
        lea     edi, [esi+0x70]
        mov     ecx, edi
        call    FUN_00491280
        mov     ecx, dword ptr [g_007b9580]
        push    ecx
        mov     dword ptr [esi], 0x76eb50
        call    FUN_006f4950
        push    ebp
        push    ebx
        mov     ecx, edi
        call    FUN_00491440
        call    FUN_006f49a0
        mov     edx, dword ptr [ebx]
        push    4
        lea     eax, [esi+0x94]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x98]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x9c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0xa0]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebx]
        push    4
        lea     ebp, [esi+0x88]
        push    ebp
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ebx, [esi+0x8c]
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        fld     dword ptr [ebp]
        fsub    dword ptr [ebx]
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi+8]
        or      eax, 0x4000000
        fdivr   dword ptr [g_0076eb4c]
        and     ecx, 0xfbffffff
        mov     dword ptr [edi+8], eax
        mov     dword ptr [edi], ecx
        pop     edi
        mov     byte ptr [esi+0x64], 1
        mov     byte ptr [esi+0x11], 2
        mov     eax, esi
        fstp    dword ptr [esi+0x90]
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
