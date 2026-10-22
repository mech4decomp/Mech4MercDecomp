/*
 * FUN_004FA0AF (327 B, __thiscall) — Builds a transform/state record for an
 * object. Copies a 0x30-byte block (ebx+0xd8 -> +0x80) onto the stack, packs
 * several floats into a local struct, calls FUN_00766c60 to initialize a
 * sub-object at ebx+0x278, then sets up a linked list node (ebx+0x290..0x2ac)
 * using XOR-obfuscated pointers from g_7dab40/g_7dab44/g_7dc728, allocates a
 * node via FUN_004e2f40, initializes it via FUN_0041fcb0, and if non-null
 * computes a transformed position (FUN_0041fcd0 / FUN_0041c830). Returns the
 * node pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab40;   /* 0x007dab40 */
extern unsigned int g_7dab44;   /* 0x007dab44 */
extern unsigned int g_7dc728;   /* 0x007dc728 */
extern void __cdecl FUN_00766c60(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041c830(void);

__declspec(naked) int FUN_004FA0AF(void)
{
    __asm {
        nop
        sub     esp, 0x54
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0xac]
        fld     dword ptr [eax + 0x8c]
        push    ebp
        push    esi
        lea     esi, [eax + 0x80]
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        push    edi
        mov     ecx, 0xc
        lea     edi, [esp + 0x34]
        rep     movsd
        fld     dword ptr [esp + 0x3c]
        lea     esi, [ebx + 0x278]
        fstp    dword ptr [esp + 0x1c]
        mov     edx, eax
        fld     dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x1c]
        fld     dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esi]
        mov     dword ptr [esi + 4], edx
        mov     dword ptr [esi + 8], eax
        call    FUN_00766c60
        mov     edx, dword ptr [ebx + 0x294]
        mov     ebp, dword ptr [g_7dab40]
        mov     dword ptr [ebx + 0x290], edx
        mov     edx, dword ptr [g_7dab44]
        lea     ecx, [ebx + 0x2c4]
        mov     dword ptr [ebx + 0x29c], ecx
        mov     ecx, dword ptr [edx]
        xor     ecx, ebp
        mov     edx, dword ptr [ecx + 0x18]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x170]
        lea     eax, [ebx + 0x298]
        mov     dword ptr [ebx + 0x2a8], ecx
        mov     ecx, dword ptr [g_7dc728]
        push    eax
        mov     dword ptr [eax], esi
        mov     dword ptr [ebx + 0x2ac], 0x2000
        call    FUN_004e2f40
        mov     edi, eax
        lea     ebp, [ebx + 0x2b0]
        mov     ecx, ebp
        mov     dword ptr [ebx + 0x2a8], edi
        call    FUN_0041fcb0
        test    edi, edi
        je      L_a1ec
        push    edi
        mov     ecx, ebp
        call    FUN_0041fcd0
        fld     dword ptr [esi + 0x18]
        fld     st(0)
        mov     edx, dword ptr [edi + 0xd8]
        fmul    dword ptr [esi + 0xc]
        add     edx, 0x80
        push    edx
        lea     eax, [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [ebx + 0x2b8]
        fld     st(0)
        fmul    dword ptr [esi + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x34]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esp + 0x38]
        call    FUN_0041c830
L_a1ec:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret
    }
}
