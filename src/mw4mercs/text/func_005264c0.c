/*
 * data_005262eb.c block (util) -- 308 bytes. Object-registration helper:
 * validates two handles via FUN_00547490, builds a log/error string through
 * several string-append calls, then writes fields into a global object
 * (0x7dd268 + 0x40ee8) and emits a formatted message.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00547490(void);
extern char g_77826c[];
extern void __cdecl FUN_0040DCA0(void);
extern char g_778278[];
extern void __cdecl FUN_0040ECC0(void);
extern void __cdecl FUN_0040EDC0(void);
extern int g_7dd268;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00523580(void);
extern char g_778288[];
extern void __cdecl FUN_0040EDA0(void);
extern char g_771d60[];
extern char g_77a388[];
extern char g_7782ec[];
extern void __cdecl FUN_00411C40(void);
extern void __cdecl FUN_0040E4A0(void);
extern void __cdecl FUN_0040DE20(void);

__declspec(naked) void FUN_005264C0(void)
{
    __asm {
        sub     esp, 0x54
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x24]
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        push    ebp
        mov     ebp, dword ptr [eax + 0x14]
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 0x28]
        push    1
        push    esi
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x78], eax
        call    FUN_00547490
        add     esp, 8
        test    al, al
        jne     L526502
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x54
        ret     0xc
L526502:
        mov     edi, dword ptr [edi]
        test    edi, edi
        je      L526526
        push    1
        push    edi
        call    FUN_00547490
        add     esp, 8
        test    al, al
        jne     L526526
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        add     esp, 0x54
        ret     0xc
L526526:
        push    1
        push    0
        push    offset g_77826c
        lea     ecx, [esp + 0x20]
        call    FUN_0040DCA0
        push    offset g_778278
        lea     ecx, [esp + 0x18]
        call    FUN_0040ECC0
        test    eax, eax
        jne     L526558
        push    offset g_778278
        lea     ecx, [esp + 0x18]
        call    FUN_0040EDC0
L526558:
        mov     ecx, dword ptr [g_7dd268]
        mov     ecx, dword ptr [ecx + 0x40ee8]
        push    esi
        add     ecx, 0x60
        call    FUN_00412780
        mov     edx, dword ptr [g_7dd268]
        mov     ecx, dword ptr [edx + 0x40ee8]
        push    edi
        add     ecx, 0x64
        call    FUN_00412780
        mov     ecx, dword ptr [g_7dd268]
        mov     eax, dword ptr [ecx + 0x40ee8]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [eax + 0x54], edx
        mov     edx, dword ptr [ebp]
        mov     dword ptr [eax + 0x58], edx
        mov     edx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [edx]
        mov     dword ptr [eax + 0x7c], edx
        call    FUN_00523580
        push    offset g_778288
        lea     ecx, [esp + 0x18]
        call    FUN_0040EDA0
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     dword ptr [eax], 0
        je      L5265C7
        push    offset g_771d60
        jmp     L5265CC
L5265C7:
        push    offset g_77a388
L5265CC:
        push    offset g_7782ec
        call    FUN_00411C40
        lea     ecx, [esp + 0x14]
        call    FUN_0040E4A0
        lea     ecx, [esp + 0x14]
        call    FUN_0040DE20
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
