/*
 * FUN_004d9400 (198 B) — __thiscall factory: builds a renderer/object
 * (0x60-byte struct) from source data, copies a 0xc-dword block, and
 * conditionally resolves a handle via FUN_004fca80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dc210(int, int);
extern void __cdecl FUN_004dd190(int);
extern void __cdecl FUN_004fca80(int, int);

extern int *g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_004d9400(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ebx, ecx
        push    0x60
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_004dc210
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        fld     qword ptr [ebx + 0xe4]
        mov     cx, word ptr [ebx + 0x76]
        fsub    qword ptr [ebx + 0xec]
        mov     ebp, eax
        mov     ax, word ptr [ebx + 0x74]
        mov     dword ptr [ebp], 0x60
        fstp    dword ptr [ebp + 0x50]
        mov     word ptr [ebp + 0x56], cx
        mov     word ptr [ebp + 0x54], ax
        lea     esi, [ebx + 0xf4]
        lea     edi, [ebp + 0x1c]
        mov     ecx, 0xc
        lea     edx, [ebp + 0x4c]
        rep movsd
        mov     ecx, dword ptr [ebx + 0xe0]
        push    edx
        call    FUN_004dd190
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        jz      L_94ad
        mov     edx, dword ptr [ebx + 0x2c]
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     dword ptr [ebp + 0x5c], eax
        mov     eax, dword ptr [ebx + 0x140]
        pop     edi
        mov     dword ptr [ebp + 0x58], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x8
L_94ad:
        mov     eax, dword ptr [ebx + 0x140]
        pop     edi
        mov     dword ptr [ebp + 0x58], eax
        pop     esi
        mov     dword ptr [ebp + 0x5c], 0xffffffff
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
