/*
 * FUN_00532840 (303 B) — Stock decal file existence check
 * Checks if a stock decal texture file exists for the given decal name.
 * Builds path "Content\\Textures\\stockdecals\\<name>.dds" and checks
 * if the file exists.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00532840(void)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_100412569(void);
extern void __cdecl FUN_1004129b0(void);
extern void __cdecl FUN_100412937(void);
extern void __cdecl FUN_100412751(void);
extern void __cdecl FUN_10041259e(void);
extern void __cdecl FUN_1004126f4(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_10040847c(void);
extern void __cdecl FUN_100412566(void);
extern void __cdecl FUN_1004126bc(void);
extern void __cdecl FUN_100408444(void);
extern void __cdecl FUN_006fc427(void);
extern void __cdecl FUN_10040841b(void);
extern void __cdecl FUN_100408400(void);
extern void __cdecl FUN_1004083e1(void);
extern void __cdecl FUN_1004083c6(void);
__asm {
sub     esp, 0x08
        mov     eax, dword ptr [esp + 0x0C]
        push    eax
        lea     ecx, [esp + 0x04]
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_100412569
        ; __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24, not 8D 4C 24 00
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_1004129b0
        ; __emit: MSVC6 encodes lea ecx,[esp] as 8D 0C 24, not 8D 4C 24 00
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_100412937
        push    0x0077A034
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x00000000
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_100412751
        ; __emit: MSVC6 encodes mov ecx,[esp] as 8B 0C 24, not 8B 4C 24 00
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        mov     edx, dword ptr [esp + 0x0C]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x0C]
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_10041259e
        push    eax
        lea     ecx, [esp + 0x10]
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_1004126f4
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        jz      skip_free_1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_1
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_004084E0
        add     esp, 0x04

skip_free_1:
        mov     eax, dword ptr [esp + 0x0C]
        push    0x007700AC
        push    eax
        lea     ecx, [esp + 0x0C]
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x10]
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_1004126bc
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        jz      skip_free_2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_2
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_100408444
        add     esp, 0x04

skip_free_2:
        mov     ecx, dword ptr [esp + 0x0C]
        push    ecx
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_006fc427
        test    al, al
        mov     eax, dword ptr [esp + 0x0C]
        jz      file_not_found

        test    eax, eax
        jz      skip_free_3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_3
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_10040841b
        add     esp, 0x04

skip_free_3:
        ; __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24, not 8B 44 24 00
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test    eax, eax
        jz      skip_free_4
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_4
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_100408400
        add     esp, 0x04

skip_free_4:
        mov     al, 0x01
        add     esp, 0x08
        ret     0x04

file_not_found:
        test    eax, eax
        jz      skip_free_5
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_5
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_1004083e1
        add     esp, 0x04

skip_free_5:
        ; __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24, not 8B 44 24 00
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test    eax, eax
        jz      skip_free_6
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_6
        push    eax
        ; __emit: MSVC6 inline asm cannot encode call rel32 to absolute address
        call FUN_1004083c6
        add     esp, 0x04

skip_free_6:
        xor     al, al
        add     esp, 0x08
        ret     0x04
    }


}
