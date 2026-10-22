/*
 * FUN_004a4e50 (186 B) — MLR subsystem. Constructs a CardCloud object
 * (vtable 0x770368), allocating a particle buffer and computing offsets.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9720(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00482b50(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00482bd0(void);
extern int g_007da988;
extern int g_007b9598;

__declspec(naked) void FUN_004a4e50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007da988]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004a9720
        mov     edx, dword ptr [g_007b9598]
        push    edx
        mov     dword ptr [esi], 0x770368
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4ea2
        mov     ecx, dword ptr [edi + 0x268]
        push    ecx
        mov     ecx, eax
        call    FUN_00482b50
        mov     ebx, eax
        jmp     L_4ea4
L_4ea2:
        xor     ebx, ebx
L_4ea4:
        mov     dword ptr [esi + 0xb0], ebx
        call    FUN_006f49a0
        mov     eax, dword ptr [edi + 0x268]
        mov     edx, dword ptr [esi + 0xa8]
        lea     ecx, [eax + eax*0x2]
        lea     ecx, [ecx + ecx*0x4]
        shl     ecx, 0x3
        lea     edi, [edx + ecx*0x1]
        mov     dword ptr [esi + 0xb4], edi
        lea     edi, [eax + eax*0x2]
        shl     eax, 0x4
        shl     edi, 0x4
        add     ecx, edi
        add     eax, edx
        add     eax, ecx
        lea     edi, [edx + ecx*0x1]
        mov     edx, dword ptr [esi + 0xb4]
        push    eax
        push    edi
        mov     dword ptr [esi + 0xbc], eax
        push    edx
        lea     eax, [esi + 0xa0]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi + 0xb8], edi
        call    FUN_00482bd0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
