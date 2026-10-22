/*
 * FUN_005fcc80 (150 B) — __thiscall. Walks a linked list (head at +0xbc)
 * calling a virtual method (slot 13) on each node, then does a
 * checksum/anti-tamper check (XOR of globals + constant), sets a flag at
 * +0x210, publishes several globals, and calls FUN_004dabf0 plus a
 * virtual method (slot 40).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f2264;
extern unsigned char g_007b5514;
extern int g_007f2260;

extern void __cdecl FUN_004f93d0(void);
extern void __cdecl FUN_004dabf0(void);

__declspec(naked) void FUN_005fcc80(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0xbc]
        test    esi, esi
        jz      L1
L0:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi+0x4]
        jz      L1
        mov     eax, dword ptr [ecx]
        push    ebx
        call    dword ptr [eax+0x34]
        /* __emit: MSVC6 miscomputes backward jmp rel8 (off-by-2: EB EF vs EB EB) */
        __emit 0xEB
        __emit 0xEB
L1:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        call    FUN_004f93d0
        test    al, al
        jnz     L2
        mov     dword ptr [edi+0x210], 0x1
        jmp     L3
L2:
        mov     dword ptr [edi+0x210], 0x0
L3:
        mov     ecx, dword ptr [edi+0x27c]
        mov     dl, byte ptr [edi+0x274]
        mov     eax, dword ptr [edi+0x278]
        mov     dword ptr [g_007f2264], ecx
        push    ebx
        mov     ecx, edi
        mov     byte ptr [g_007b5514], dl
        mov     dword ptr [g_007f2260], eax
        call    FUN_004dabf0
        mov     edx, dword ptr [edi]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0xa0]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
