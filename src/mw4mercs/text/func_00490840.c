/*
 * FUN_00490840 (501 B) — MLR texture-flag parser (__thiscall). Reads a
 * sequence of named boolean/string attributes from a stream and ORs the
 * corresponding flag bits into a result (mipmap/memory/pageout/filter/
 * compression/etc.).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411ec0(void);
extern int g_0076b2ac;
extern int g_007700a0;
extern int g_00770094;
extern int g_0077008c;
extern int g_00770084;
extern int g_00770080;
extern int g_00770078;
extern int g_0077006c;
extern int g_00770064;
extern int g_0077005c;
extern int g_00770054;
extern int g_00770048;
extern int g_00770044;
extern int g_0076ffb4;
extern int g_00770030;
extern int g_00770024;
extern int g_00770018;
extern int g_00770010;
extern int g_00770008;

__declspec(naked) void FUN_00490840(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        xor     esi, esi
        push    esi
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_007700a0
        mov     ecx, edi
        mov     byte ptr [esp + 0x1b], 0
        call    FUN_00411bf0
        test    al, al
        mov     ebx, dword ptr [g_0076b2ac]
        jz      L_mem
        mov     ecx, dword ptr [esp + 0x14]
        push    offset g_00770094
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_mip_none
        mov     esi, 0x800
        jmp     L_mem
    L_mip_none:
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_0077008c
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_mem
        mov     esi, 0x41
    L_mem:
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_00770084
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_dontshrink
        mov     ecx, dword ptr [esp + 0x14]
        push    offset g_00770080
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_mem_video
        or      esi, 2
        jmp     L_dontshrink
    L_mem_video:
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_00770078
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_dontshrink
        or      esi, 4
    L_dontshrink:
        push    0
        lea     eax, [esp + 0x13]
        push    eax
        push    offset g_0077006c
        mov     ecx, edi
        call    FUN_00411ec0
        test    al, al
        jz      L_pageout
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      L_pageout
        or      esi, 0x40
    L_pageout:
        push    0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    offset g_00770064
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_mipfilter
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_0077005c
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_page_first
        or      esi, 0x10
        jmp     L_mipfilter
    L_page_first:
        mov     eax, dword ptr [esp + 0x14]
        push    offset g_00770054
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_mipfilter
        or      esi, 0x20
    L_mipfilter:
        push    0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    offset g_00770048
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_pink
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_00770044
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_mf_point
        or      esi, 0x100
        jmp     L_pink
    L_mf_point:
        mov     eax, dword ptr [esp + 0x14]
        push    offset g_0076ffb4
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_pink
        or      esi, 0x200
    L_pink:
        push    0
        lea     ecx, [esp + 0x13]
        push    ecx
        push    offset g_00770030
        mov     ecx, edi
        call    FUN_00411ec0
        test    al, al
        jz      L_blue
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      L_blue
        or      esi, 0x1000
    L_blue:
        push    0
        lea     edx, [esp + 0x13]
        push    edx
        push    offset g_00770024
        mov     ecx, edi
        call    FUN_00411ec0
        test    al, al
        jz      L_comp
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      L_comp
        or      esi, 0x2000
    L_comp:
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_00770018
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_done
        mov     ecx, dword ptr [esp + 0x14]
        push    offset g_00770010
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_comp_very
        or      esi, 0x4000
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    L_comp_very:
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_00770008
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_done
        or      esi, 0x8000
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
