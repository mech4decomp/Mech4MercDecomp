/*
 * FUN_0053f9b0 (184 B) — Mission checksum verification and state update.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416F60(void);
extern void __cdecl FUN_004D2AB0(void);
extern void __cdecl FUN_0062DDC0(void);

__declspec(naked) void __fastcall FUN_0053f9b0(void)
{
    

extern int DAT_007db0b8;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0xC
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx                     ; this

        mov     eax, dword ptr [edi + 0x239D44]
        mov     esi, dword ptr [edi + 0x239D48]
        xor     esi, eax                     ; checksum = val1 ^ val2

        ; mov eax, dword ptr [0x007DB0B8]
        mov eax, dword ptr [DAT_007db0b8]

        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [eax + 0x14]
        mov     dword ptr [esp + 0x14], 1
        call    FUN_00416F60

        push    esi
        mov     ecx, eax
        call    FUN_004D2AB0

        push    esi
        mov     ebp, eax
        mov     ebx, edx
        call    FUN_0062DDC0

        mov     ecx, dword ptr [esp + 0x28]  ; param_2 (stream)
        xor     ebp, eax
        xor     eax, eax
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax  ; local_8 = 0
        mov     dword ptr [esp + 0x18], eax  ; local_4 = 0
        push    8
        lea     eax, [esp + 0x18]
        xor     ebx, edx
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x20]       ; stream->Read(&local_8, 8)

        cmp     ebp, dword ptr [esp + 0x14]
        jnz     checksum_mismatch
        cmp     ebx, dword ptr [esp + 0x18]
        jz      checksum_ok

    checksum_mismatch:
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]
        ; xor edx, dword ptr [0x007DAB40]
        xor edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [edx + 0x0C]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    1
        mov     dword ptr [edi + 0x3514], 3
        call    dword ptr [eax + 0x2C]       ; vtable call

    checksum_ok:
        or      eax, -1
        mov     dword ptr [edi + 0x3070], eax
        mov     dword ptr [edi + 0x3074], eax
        mov     byte ptr [edi + 0x3078], 1

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     8
    }


}
