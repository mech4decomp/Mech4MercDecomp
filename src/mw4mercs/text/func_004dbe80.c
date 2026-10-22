#include <windows.h>

extern int g_7b8810;
extern char g_7b8ef0;
extern char g_7b8de8[];
extern void *g_76cd64;
extern char g_7735a0[];
extern char g_773570[];
extern char g_773564[];
extern char g_77355c[];
extern char g_773558[];
extern char g_77354c[];

extern void *__cdecl FUN_004084C0(int, int);
extern void __cdecl FUN_004C41D0(void);
extern void __cdecl FUN_0040C0E0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040D9B0(void);
extern char __stdcall FUN_006FC4D0(void *);
extern int __cdecl FUN_006FABF0(const char *, ...);
extern void __cdecl FUN_004D2000(void);
extern char __cdecl FUN_004D24F0(void);
extern void __cdecl FUN_0041DE80(void);
extern void __cdecl FUN_00412B30(void);
extern void __cdecl FUN_00412BF0(void);
extern void __cdecl FUN_00412E70(void);
extern void __cdecl FUN_004D2680(void);
extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_00411EC0(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0041EF60(void);
extern void __cdecl FUN_00412B60(void);
extern void __cdecl FUN_0041DEC0(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void __cdecl FUN_004DBE80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x134
        mov     eax, dword ptr [g_7b8810]
        push    ebx
        push    esi
        push    eax
        push    0xc
        call    FUN_004084C0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 0x8
        cmp     esi, ebx
        jz      l_alloc_null
        mov     ecx, dword ptr [ebp + 0x8]
        add     ecx, 0x44
        push    ecx
        mov     ecx, esi
        call    FUN_004C41D0
        mov     dword ptr [esi], offset g_76cd64
        mov     dword ptr [ebp - 0x10], esi
        jmp     l_loop_head
    l_alloc_null:
        mov     dword ptr [ebp - 0x10], ebx
    l_loop_head:
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_0040C0E0
        mov     esi, eax
        cmp     esi, ebx
        jz      l_end
        push    edi
    l_loop_body:
        mov     edi, dword ptr [esi + 0x14]
        cmp     edi, ebx
        jz      l_loop_continue
        push    offset g_7735a0
        lea     ecx, [ebp - 0x8]
        call    FUN_00412570
        mov     edx, dword ptr [ebp - 0x8]
        push    edi
        push    edx
        lea     ecx, [ebp - 0x18]
        call    FUN_004125E0
        push    eax
        lea     ecx, [ebp - 0x8]
        call    FUN_00412740
        lea     ecx, [ebp - 0x18]
        call    FUN_0040D9B0
        mov     eax, dword ptr [ebp - 0x8]
        push    eax
        call    FUN_006FC4D0
        test    al, al
        jnz     l_audio_found
        mov     ecx, dword ptr [ebp - 0x8]
        push    ecx
        push    offset g_773570
        call    FUN_006FABF0
        add     esp, 0x8
        test    eax, eax
        jz      l_audio_missing
        int     3
    l_audio_missing:
        lea     ecx, [ebp - 0x8]
        call    FUN_0040D9B0
        jmp     l_loop_continue
    l_audio_found:
        cmp     byte ptr [g_7b8ef0], bl
        mov     eax, offset g_7b8de8
        jnz     l_use_default
        mov     eax, dword ptr [ebp - 0x8]
    l_use_default:
        push    ebx
        push    eax
        lea     ecx, [ebp - 0x88]
        call    FUN_004D2000
        cmp     dword ptr [ebp - 0x4c], ebx
        mov     byte ptr [g_7b8ef0], bl
        jz      l_skip_d24
        cmp     dword ptr [ebp - 0x6c], ebx
        jbe     l_skip_d24
        lea     ecx, [ebp - 0x88]
        call    FUN_004D24F0
        test    al, al
        jnz     l_do_work
    l_skip_d24:
        mov     edx, dword ptr [ebp - 0x8]
        push    ebx
        push    edx
        lea     ecx, [ebp - 0xf0]
        call    FUN_0041DE80
        lea     ecx, [ebp - 0xc0]
        call    FUN_00412B30
        lea     eax, [ebp - 0xf0]
        push    eax
        lea     ecx, [ebp - 0xc0]
        call    FUN_00412BF0
        mov     ecx, dword ptr [ebp + 0x8]
        lea     edi, [ecx + 0xc]
        push    edi
        lea     ecx, [ebp - 0xc0]
        call    FUN_00412E70
        lea     edx, [ebp - 0xc0]
        push    edx
        lea     eax, [ebp - 0xf0]
        push    eax
        lea     ecx, [ebp - 0x88]
        call    FUN_004D2680
        push    ebx
        lea     ecx, [ebp - 0x44]
        call    FUN_0041EE70
        mov     edx, dword ptr [ebp - 0x44]
        push    0x4
        lea     ecx, [ebp - 0x48]
        push    ecx
        lea     ecx, [ebp - 0x44]
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     eax, [ebp - 0x1]
        push    eax
        push    offset g_773564
        mov     ecx, esi
        mov     byte ptr [ebp - 0x1], bl
        call    FUN_00411EC0
        mov     cl, byte ptr [ebp - 0x1]
        mov     eax, dword ptr [ebp - 0x44]
        neg     cl
        push    0x4
        lea     edx, [ebp - 0x14]
        push    edx
        sbb     ecx, ecx
        and     ecx, 0x4
        add     ecx, 0x2
        mov     dword ptr [ebp - 0x14], ecx
        lea     ecx, [ebp - 0x44]
        call    dword ptr [eax + 0x24]
        cmp     byte ptr [ebp - 0x1], bl
        push    ebx
        setz    cl
        lea     edx, [ebp - 0x1]
        push    edx
        mov     byte ptr [ebp - 0x1], cl
        push    offset g_77355c
        mov     ecx, esi
        call    FUN_00411EC0
        mov     edx, dword ptr [ebp - 0x44]
        push    0x1
        lea     eax, [ebp - 0x1]
        push    eax
        lea     ecx, [ebp - 0x44]
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     eax, [ebp - 0x1]
        push    eax
        push    offset g_773558
        mov     ecx, esi
        mov     byte ptr [ebp - 0x1], bl
        call    FUN_00411EC0
        mov     edx, dword ptr [ebp - 0x44]
        push    0x1
        lea     ecx, [ebp - 0x1]
        push    ecx
        lea     ecx, [ebp - 0x44]
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0xc], eax
        cmp     eax, ebx
        jz      l_skip_inc
        inc     byte ptr [eax - 0x1]
    l_skip_inc:
        mov     eax, dword ptr [ebp - 0xc]
        push    offset g_77354c
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_004125E0
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x1c]
        cmp     eax, ebx
        jz      l_skip_free1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free1
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free1:
        mov     ecx, dword ptr [ebp - 0xc]
        push    ebx
        push    ecx
        lea     ecx, [ebp - 0x134]
        call    FUN_004D2000
        push    edi
        lea     edx, [ebp - 0x44]
        push    edx
        lea     ecx, [ebp - 0x134]
        call    FUN_004D2680
        lea     ecx, [ebp - 0x134]
        call    FUN_004D21C0
        mov     eax, dword ptr [ebp - 0xc]
        cmp     eax, ebx
        jz      l_skip_free2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free2
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free2:
        lea     ecx, [ebp - 0x44]
        call    FUN_0041EF60
        lea     ecx, [ebp - 0xc0]
        call    FUN_00412B60
        lea     ecx, [ebp - 0xf0]
        call    FUN_0041DEC0
    l_do_work:
        lea     ecx, [ebp - 0x88]
        call    FUN_004D21C0
        mov     eax, dword ptr [ebp - 0x8]
        cmp     eax, ebx
        jz      l_loop_continue
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_loop_continue
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_loop_continue:
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_0040C0E0
        mov     esi, eax
        cmp     esi, ebx
        jnz     l_loop_body
        pop     edi
    l_end:
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
