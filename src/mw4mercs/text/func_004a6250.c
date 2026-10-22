/*
 * FUN_004a6250 (188 B) — MLR: object constructor (__thiscall, RET 0x8).
 * Builds a CStringT from globals, sets vtable 0x7703a8, allocates a
 * 0xa4-byte buffer (FUN_004084d0 = operator new), initializes it via
 * FUN_00484720, and computes buffer offsets into this+0xb0/b4/b8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da98c;
extern int g_007b9598;
extern void __cdecl FUN_004a9720(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_00484720(void);

__declspec(naked) void FUN_004a6250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da98c]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_004a9720
        mov     edx, dword ptr [g_007b9598]
        push    edx
        mov     dword ptr [esi], 0x7703a8
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L62aa
        mov     ecx, dword ptr [ebx + 0x268]
        mov     edx, dword ptr [ebx + 0x380]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_00484720
        mov     edi, eax
        jmp     L62ac
L62aa:
        xor     edi, edi
L62ac:
        mov     dword ptr [esi + 0xb0], edi
        call    FUN_006f49a0
        mov     eax, dword ptr [ebx + 0x268]
        mov     edx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edx + 0x380]
        mov     ebx, dword ptr [esi + 0xa8]
        imul    edx, eax
        lea     ecx, [eax + eax*4]
        lea     ecx, [eax + ecx*2]
        lea     ecx, [ecx + ecx*4]
        shl     ecx, 0x2
        lea     ebp, [ebx + ecx]
        lea     eax, [edx + edx*2]
        lea     edx, [ebx + eax*4]
        mov     eax, dword ptr [edi]
        add     ecx, edx
        push    ecx
        mov     dword ptr [esi + 0xb8], ecx
        push    ebp
        lea     ecx, [esi + 0xa0]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esi + 0xb4], ebp
        call    dword ptr [eax + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
