/*
 * FUN_0041dac0 (101 B) — __fastcall destructor/cleanup. Calls virtual methods
 * on the two child objects at [ECX+0x34]/[ECX+0x30], destroys two sub-objects
 * (FUN_004169c0), and releases the string at [ECX+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041dac0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0x34]
        mov     ecx, dword ptr [esi+0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x8]
        test    esi, esi
        jz      L_dadb
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    L_dadb:
        mov     esi, dword ptr [edi+0x30]
        test    esi, esi
        jz      L_daf6
        mov     ecx, dword ptr [esi+0x4]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x8]
        test    esi, esi
        jz      L_daf6
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    L_daf6:
        lea     ecx, [edi+0x1c]
        call    FUN_004169c0
        lea     ecx, [edi+0x8]
        call    FUN_004169c0
        mov     edi, dword ptr [edi+0x4]
        test    edi, edi
        jz      L_db22
        mov     cl, byte ptr [edi-1]
        lea     eax, [edi-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_db22
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_db22:
        pop     edi
        pop     esi
        ret
    }
}
