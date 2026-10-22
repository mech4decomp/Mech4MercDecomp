#include <windows.h>

extern int g_7b8810;
extern char g_7b8ef0;
extern char g_7b8de8[];
extern void *g_76cd64;
extern char g_773544[];
extern char g_773538[];
extern char g_773498[];
extern char g_7700ac[];
extern char g_773518[];
extern char g_773510[];
extern char g_773508[];
extern char g_773500[];
extern char g_7734f8[];
extern char g_7734f0[];
extern char g_7734e8[];
extern char g_7734e0[];
extern char g_773490[];

extern void *__cdecl FUN_004084C0(int, int);
extern void __cdecl FUN_004C41D0(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_00411EC0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084E0(void);
extern char __stdcall FUN_006FC4D0(void *);
extern int __cdecl FUN_006FAB90(const char *, ...);
extern void __cdecl FUN_004D2000(void);
extern char __cdecl FUN_004D24F0(void);
extern int __cdecl FUN_00490840(void *);
extern void __cdecl FUN_00411CB0(void);
extern void __cdecl FUN_0041DE80(void);
extern void __cdecl FUN_00412B30(void);
extern void __cdecl FUN_00412BF0(void);
extern void __cdecl FUN_00412E70(void);
extern void __cdecl FUN_004D2680(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_0041E710(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_00412B60(void);
extern void __cdecl FUN_0041DEC0(void);

__declspec(naked) void __cdecl FUN_004DB9D0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x140
        mov     eax, dword ptr [g_7b8810]
        push    ebx
        push    esi
        push    edi
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
        mov     dword ptr [ebp - 0x20], esi
        jmp     l_loop_head
    l_alloc_null:
        mov     dword ptr [ebp - 0x20], ebx
    l_loop_head:
        mov     ecx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ecx + 0x8]
        cmp     eax, ebx
        jz      l_end
        mov     esi, dword ptr [eax]
        cmp     esi, ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x10], esi
        mov     dword ptr [ecx + 0x8], edx
        jz      l_end
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x14], eax
        jz      l_loop_head
        push    ebx
        lea     eax, [ebp - 0x14]
        push    eax
        push    offset g_773544
        mov     ecx, esi
        call    FUN_00411BF0
        push    ebx
        lea     ecx, [ebp - 0x1]
        push    ecx
        push    offset g_773538
        mov     ecx, esi
        mov     byte ptr [ebp - 0x1], 0x1
        call    FUN_00411EC0
        cmp     byte ptr [ebp - 0x1], bl
        jz      l_loop_head
        push    offset g_773498
        lea     ecx, [ebp - 0xc]
        call    FUN_00412570
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0xc]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x24]
        call    FUN_004125E0
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x24]
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
        push    offset g_7700ac
        push    ecx
        lea     ecx, [ebp - 0x30]
        call    FUN_004125E0
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x30]
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
        mov     edx, dword ptr [ebp - 0xc]
        push    edx
        call    FUN_006FC4D0
        test    al, al
        jnz     l_after_png
        mov     edx, dword ptr [ebp - 0xc]
        cmp     edx, ebx
        jnz     l_strlen
        xor     ecx, ecx
        jmp     l_strlen_done
    l_strlen:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
    l_strlen_done:
        lea     eax, [ecx + edx - 0x3]
        mov     byte ptr [eax], 0x70
        mov     byte ptr [eax + 0x1], 0x6e
        mov     byte ptr [eax + 0x2], 0x67
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        call    FUN_006FC4D0
        test    al, al
        jnz     l_after_png
        mov     ecx, dword ptr [ebp - 0x14]
        push    ecx
        push    offset g_773518
        call    FUN_006FAB90
        add     esp, 0x8
        test    eax, eax
        jz      l_after_png
        int     3
    l_after_png:
        cmp     byte ptr [g_7b8ef0], bl
        mov     eax, offset g_7b8de8
        jnz     l_use_default
        mov     eax, dword ptr [ebp - 0xc]
    l_use_default:
        push    ebx
        push    eax
        lea     ecx, [ebp - 0x74]
        call    FUN_004D2000
        cmp     dword ptr [ebp - 0x38], ebx
        mov     byte ptr [g_7b8ef0], bl
        jz      l_skip_d24
        cmp     dword ptr [ebp - 0x58], ebx
        jbe     l_skip_d24
        lea     ecx, [ebp - 0x74]
        call    FUN_004D24F0
        test    al, al
        jnz     l_do_work
    l_skip_d24:
        push    esi
        call    FUN_00490840
        add     esp, 0x4
        push    ebx
        lea     edx, [ebp - 0x28]
        push    edx
        and     eax, 0xfffffff7
        push    offset g_773510
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_00411BF0
        test    al, al
        jz      l_format_unknown
        mov     edi, dword ptr [ebp - 0x28]
        mov     esi, offset g_773508
        mov     ecx, edi
    l_cmp1:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_cmp1_ne
        cmp     dl, bl
        jz      l_cmp1_eq
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     l_cmp1_ne
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     l_cmp1
    l_cmp1_eq:
        xor     ecx, ecx
        jmp     l_cmp1_done
    l_cmp1_ne:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    l_cmp1_done:
        cmp     ecx, ebx
        jz      l_format_known
        mov     esi, offset g_773500
        mov     ecx, edi
    l_cmp2:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_cmp2_ne
        cmp     dl, bl
        jz      l_cmp2_eq
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     l_cmp2_ne
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     l_cmp2
    l_cmp2_eq:
        xor     ecx, ecx
        jmp     l_cmp2_done
    l_cmp2_ne:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    l_cmp2_done:
        cmp     ecx, ebx
        jnz     l_cmp3
        mov     eax, dword ptr [ebp - 0x8]
        or      eax, 0x10000
    l_or_store:
        mov     dword ptr [ebp - 0x8], eax
    l_format_known:
        mov     esi, dword ptr [ebp - 0x10]
    l_fmt_body:
        push    ebx
        lea     eax, [ebp - 0x18]
        push    eax
        push    offset g_7734f8
        mov     ecx, esi
        mov     dword ptr [ebp - 0x18], ebx
        call    FUN_00411CB0
        mov     eax, dword ptr [ebp - 0x18]
        cmp     eax, -0x5
        jge     l_clamp_ok
        mov     eax, 0xfffffffb
        jmp     l_clamp_done
    l_cmp3:
        mov     esi, offset g_7734f0
        mov     ecx, edi
    l_cmp3_loop:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_cmp3_ne
        cmp     dl, bl
        jz      l_cmp3_eq
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     l_cmp3_ne
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     l_cmp3_loop
    l_cmp3_eq:
        xor     ecx, ecx
        jmp     l_cmp3_done
    l_cmp3_ne:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    l_cmp3_done:
        cmp     ecx, ebx
        jnz     l_cmp4
        mov     eax, dword ptr [ebp - 0x8]
        or      eax, 0x20000
        jmp     l_or_store
    l_cmp4:
        mov     esi, offset g_7734e8
        mov     ecx, edi
    l_cmp4_loop:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_cmp4_ne
        cmp     dl, bl
        jz      l_cmp4_eq
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     l_cmp4_ne
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     l_cmp4_loop
    l_cmp4_eq:
        xor     ecx, ecx
        jmp     l_cmp4_done
    l_cmp4_ne:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    l_cmp4_done:
        cmp     ecx, ebx
        jnz     l_cmp5
        mov     eax, dword ptr [ebp - 0x8]
        or      eax, 0x30000
        jmp     l_or_store
    l_cmp5:
        mov     esi, offset g_7734e0
        mov     eax, edi
    l_cmp5_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     l_cmp5_ne
        cmp     cl, bl
        jz      l_cmp5_eq
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     l_cmp5_ne
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     l_cmp5_loop
    l_cmp5_eq:
        xor     eax, eax
        jmp     l_cmp5_done
    l_cmp5_ne:
        sbb     eax, eax
        sbb     eax, -0x1
    l_cmp5_done:
        cmp     eax, ebx
        mov     eax, dword ptr [ebp - 0x8]
        jnz     l_cmp5_unknown
        or      eax, 0x40000
        jmp     l_or_store
    l_cmp5_unknown:
        or      eax, 0xff0000
        jmp     l_or_store
    l_format_unknown:
        or      dword ptr [ebp - 0x8], 0xff0000
        jmp     l_fmt_body
    l_clamp_ok:
        cmp     eax, 0x5
        jle     l_after_clamp
        mov     eax, 0x5
    l_clamp_done:
        mov     dword ptr [ebp - 0x18], eax
    l_after_clamp:
        mov     ecx, dword ptr [ebp - 0x8]
        shl     eax, 0x18
        or      ecx, eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [ebp - 0xc]
        push    ebx
        push    ecx
        lea     ecx, [ebp - 0xfc]
        call    FUN_0041DE80
        lea     ecx, [ebp - 0xcc]
        call    FUN_00412B30
        lea     edx, [ebp - 0xfc]
        push    edx
        lea     ecx, [ebp - 0xcc]
        call    FUN_00412BF0
        mov     eax, dword ptr [ebp + 0x8]
        lea     esi, [eax + 0xc]
        push    esi
        lea     ecx, [ebp - 0xcc]
        call    FUN_00412E70
        lea     ecx, [ebp - 0xcc]
        push    ecx
        lea     edx, [ebp - 0xfc]
        push    edx
        lea     ecx, [ebp - 0x74]
        call    FUN_004D2680
        mov     eax, dword ptr [ebp - 0x4c]
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00412570
        mov     ecx, dword ptr [ebp - 0x1c]
        push    offset g_773490
        push    ecx
        lea     ecx, [ebp - 0x2c]
        call    FUN_004125E0
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x2c]
        cmp     eax, ebx
        jz      l_skip_free3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free3
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free3:
        mov     edx, dword ptr [ebp - 0x1c]
        push    ebx
        push    edx
        lea     ecx, [ebp - 0x140]
        call    FUN_004D2000
        push    ebx
        push    0x4
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0x94]
        call    FUN_0041E690
        push    esi
        lea     ecx, [ebp - 0x94]
        push    ecx
        lea     ecx, [ebp - 0x140]
        call    FUN_004D2680
        lea     ecx, [ebp - 0x94]
        call    FUN_0041E710
        lea     ecx, [ebp - 0x140]
        call    FUN_004D21C0
        mov     eax, dword ptr [ebp - 0x1c]
        cmp     eax, ebx
        jz      l_skip_free4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free4
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
    l_skip_free4:
        lea     ecx, [ebp - 0xcc]
        call    FUN_00412B60
        lea     ecx, [ebp - 0xfc]
        call    FUN_0041DEC0
    l_do_work:
        lea     ecx, [ebp - 0x74]
        call    FUN_004D21C0
        mov     eax, dword ptr [ebp - 0xc]
        cmp     eax, ebx
        jz      l_loop_head
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_loop_head
        push    eax
        call    FUN_004084E0
        add     esp, 0x4
        jmp     l_loop_head
    l_end:
        push    ecx
        call    FUN_004084E0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
