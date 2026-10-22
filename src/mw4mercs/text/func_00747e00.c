/*
 * FUN_00747e00 (extent 0x747e00-0x7480aa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0d8;
extern int    g_0076b0f4;
extern char   g_0087dd0a;
extern int    g_008aac84;
extern int    g_008aaca0;
extern int    g_008aaca4;
extern int    g_008aaca8;
extern int    g_008aacac;
extern int    g_008aacb0;
extern int    g_008aacb4;
extern int    g_008aacc8;
extern int    g_008b2778;
extern int    g_008b277c;
extern int    g_008b2780;
extern int    g_008b2784;
extern char   g_008b294c;
extern int    g_008b2950;
extern int    g_008b295c;
extern int    g_008b2964;
extern int    g_008b2968;
extern int    g_008b296c;
extern char   g_008b2970;
extern int    g_008b2974;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_00746c50(void);
extern void __cdecl FUN_00746ce0(void);
extern void __cdecl FUN_00747dc0(void);

__declspec(naked) void FUN_00747e00(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        call    FUN_00747dc0
        test    al, al
        je    L_7e30
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    esi
        call    FUN_00747dc0
        test    al, al
        je    L_7e30
        mov    al, 1
        pop    esi
        ret    0xc
L_7e30:
        xor    al, al
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x3c
        push    ebx
        push    esi
        push    edi
        xor    ebx, ebx
        push    ebx
        push    1
        push    2
        mov    byte ptr [g_008b294c], bl
        call    dword ptr [g_008aaca0]
        cmp    eax, -1
        mov    dword ptr [g_008b2964], eax
        jne    L_7e7e
        push    0x7aa3bc
        mov    byte ptr [g_0087dd0a], bl
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7e7e
        int 3    
L_7e7e:
        push    0xbb9
        mov    word ptr [ebp - 0x14], 2
        call    dword ptr [g_008aaca4]
        push    ebx
        mov    word ptr [ebp - 0x12], ax
        call    dword ptr [g_008aaca8]
        mov    ecx, dword ptr [g_008b2964]
        mov    dword ptr [ebp - 0x10], eax
        push    0x10
        lea    eax, [ebp - 0x14]
        push    eax
        push    ecx
        call    dword ptr [g_008aacac]
        cmp    eax, -1
        jne    L_7ede
        call    dword ptr [g_008aac84]
        cmp    eax, 0x2740
        je    L_809f
        push    0x7aa3a0
        mov    byte ptr [g_0087dd0a], bl
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7ede
        int 3    
L_7ede:
        mov    edx, dword ptr [g_008b2964]
        push    3
        push    edx
        call    dword ptr [g_008aacb0]
        cmp    eax, -1
        je    L_8099
        cmp    byte ptr [g_008b2970], bl
        jne    L_809f
        mov    edi, dword ptr [g_0076b0f4]
        mov    esi, dword ptr [g_0076b0d8]
L_7f0e:
        mov    edx, dword ptr [g_008b2964]
        lea    eax, [ebp - 4]
        push    eax
        lea    ecx, [ebp - 0x24]
        push    ecx
        push    edx
        mov    dword ptr [ebp - 4], 0x10
        call    dword ptr [g_008aacb4]
        cmp    eax, -1
        mov    dword ptr [g_008b296c], eax
        je    L_8099
        cmp    byte ptr [g_008b2970], bl
        mov    dword ptr [g_008b2974], ebx
        jne    L_806f
L_7f4a:
        cmp    byte ptr [g_008b294c], bl
        jne    L_806f
        mov    dword ptr [g_008b2950], ebx
L_7f5c:
        cmp    byte ptr [g_008b294c], bl
        jne    L_806f
        mov    eax, dword ptr [g_008b2974]
        inc    eax
        cmp    eax, 6
        mov    dword ptr [g_008b2974], eax
        jg    L_7f8f
        mov    eax, dword ptr [g_008b295c]
        push    0x3e8
        push    eax
        call    edi
        cmp    dword ptr [g_008b2950], ebx
        je    L_7f5c
        jmp    L_7fa3
L_7f8f:
        mov    ecx, dword ptr [g_008b2968]
        push    ecx
        mov    byte ptr [g_008b294c], 1
        call    dword ptr [g_008aacc8]
L_7fa3:
        cmp    byte ptr [g_008b294c], bl
        jne    L_806f
        mov    dword ptr [g_008b2950], 2
        mov    dword ptr [ebp - 0x38], 0xc8
        call    FUN_00707f50
        mov    dword ptr [ebp - 0x34], eax
        mov    dword ptr [ebp - 0x30], edx
        call    FUN_00746c50
        push    0x1f4
        call    esi
        call    FUN_00746ce0
        call    FUN_00707f50
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [g_008b2780]
        mov    dword ptr [ebp - 0x28], edx
        mov    edx, dword ptr [g_008b2778]
        push    0x18
        add    eax, edx
        mov    edx, dword ptr [g_008b296c]
        lea    ecx, [ebp - 0x3c]
        push    ecx
        push    edx
        mov    dword ptr [ebp - 0x3c], eax
        mov    dword ptr [g_008b2950], 3
        call    FUN_00747dc0
        test    al, al
        je    L_806f
        mov    eax, dword ptr [g_008b2780]
        cmp    eax, ebx
        jbe    L_8037
        mov    ecx, dword ptr [g_008b296c]
        push    eax
        mov    eax, dword ptr [g_008b2784]
        push    eax
        push    ecx
        call    FUN_00747dc0
        test    al, al
        je    L_806f
L_8037:
        mov    eax, dword ptr [g_008b2778]
        cmp    eax, ebx
        jbe    L_8057
        mov    edx, dword ptr [g_008b277c]
        push    eax
        mov    eax, dword ptr [g_008b296c]
        push    edx
        push    eax
        call    FUN_00747dc0
        test    al, al
        je    L_806f
L_8057:
        cmp    byte ptr [g_008b2970], bl
        mov    dword ptr [g_008b2950], ebx
        mov    dword ptr [g_008b2974], ebx
        je    L_7f4a
L_806f:
        mov    ecx, dword ptr [g_008b296c]
        push    ecx
        mov    byte ptr [g_008b294c], bl
        call    dword ptr [g_008aacc8]
        cmp    byte ptr [g_008b2970], bl
        je    L_7f0e
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_8099:
        call    dword ptr [g_008aac84]
L_809f:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
