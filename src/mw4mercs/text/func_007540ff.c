/*
 * FUN_007540ff (extent 0x7540ff-0x754408) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern char   g_00859f84;
extern int    g_00859fa4;
extern int    g_00859fa8;
extern int    g_00859fac;
extern int    g_00859fb0;
extern int    g_00859fb8;
extern int    g_008b2874;
extern int    g_008b2878;
extern int    g_008b287c;
extern int    g_008b2888;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_007540ff(void)
{
    __asm {
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008b287c]
        push    edi
        xor    ebx, ebx
        xor    edi, edi
        test    esi, esi
        je    L_418a
L_4111:
        xor    eax, eax
        mov    al, byte ptr [esi + 4]
        inc    ebx
        not    eax
        test    al, 4
        je    L_412f
        push    0x7adba8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_412f
        int 3    
L_412f:
        cmp    esi, dword ptr [g_008b2874]
        jae    L_4149
        push    0x7adb94
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_4149
        int 3    
L_4149:
        mov    eax, dword ptr [g_008b2874]
        lea    ecx, [esi - 0x29040]
        cmp    ecx, eax
        jb    L_416a
        push    0x7adb68
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_416a
        int 3    
L_416a:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_418a
        and    eax, 0xffff
        lea    edx, [eax*8]
        sub    edx, eax
        lea    esi, [esi + edx*8]
        test    esi, esi
        jne    L_4111
L_418a:
        mov    esi, dword ptr [g_008b2878]
        test    esi, esi
        je    L_420a
L_4194:
        mov    al, byte ptr [esi + 4]
        inc    edi
        test    al, 4
        je    L_41ae
        push    0x7adb4c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_41ae
        int 3    
L_41ae:
        cmp    esi, dword ptr [g_008b2874]
        jae    L_41c8
        push    0x7adb38
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_41c8
        int 3    
L_41c8:
        mov    ecx, dword ptr [g_008b2874]
        lea    eax, [esi - 0x29040]
        cmp    eax, ecx
        jb    L_41ea
        push    0x7adb0c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_41ea
        int 3    
L_41ea:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_420a
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_4194
L_420a:
        add    edi, ebx
        cmp    edi, 0xbb8
        pop    edi
        pop    esi
        pop    ebx
        je    L_4229
        push    0x7adae0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_4229
        int 3    
L_4229:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [g_008b2888]
        push    ebx
        push    esi
        xor    esi, esi
        mov    si, word ptr [ecx]
        xor    ebx, ebx
        test    eax, eax
        mov    bx, word ptr [ecx + 2]
        push    edi
        mov    dword ptr [esp + 0x10], esi
        mov    dword ptr [esp + 0xc], ebx
        je    L_42c5
        cmp    si, 0x10
        jbe    L_42c5
        cmp    bx, 0x10
        jbe    L_42c5
        test    byte ptr [ecx + 6], 0x40
        je    L_42aa
        cmp    eax, 2
        jle    L_42c5
        mov    edx, dword ptr [ecx + 0x14]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 8
        jb    L_429e
        or    ecx, 0xffffffff
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        lea    eax, [ecx + edx - 8]
        push    0x7adbc8
        push    eax
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        je    L_42c5
L_429e:
        shr    word ptr [esp + 0x10], 1
        shr    word ptr [esp + 0xc], 1
        jmp    L_42bd
L_42aa:
        cmp    eax, 2
        jle    L_42b0
        dec    eax
L_42b0:
        mov    cx, ax
        shr    word ptr [esp + 0x10], cl
        shr    word ptr [esp + 0xc], cl
L_42bd:
        mov    ebx, dword ptr [esp + 0xc]
        mov    esi, dword ptr [esp + 0x10]
L_42c5:
        test    byte ptr [g_00859f84], 0x20
        je    L_42ea
        mov    cx, word ptr [esp + 0xc]
        cmp    word ptr [esp + 0x10], cx
        jbe    L_42e2
        mov    ebx, esi
        mov    dword ptr [esp + 0xc], ebx
        jmp    L_435e
L_42e2:
        mov    esi, ebx
        mov    dword ptr [esp + 0x10], esi
        jmp    L_435e
L_42ea:
        mov    eax, dword ptr [g_00859fb8]
        test    eax, eax
        je    L_435e
        mov    dx, word ptr [esp + 0x10]
        cmp    word ptr [esp + 0xc], dx
        jae    L_4330
        mov    edi, ebx
        and    edi, 0xffff
        imul    edi, eax
        mov    ecx, esi
        and    ecx, 0xffff
        cmp    ecx, edi
        jbe    L_432b
L_4316:
        shl    ebx, 1
        mov    edi, ebx
        and    edi, 0xffff
        imul    edi, eax
        cmp    ecx, edi
        mov    dword ptr [esp + 0xc], ebx
        ja    L_4316
L_432b:
        cmp    word ptr [esp + 0xc], dx
L_4330:
        jbe    L_435e
        mov    edx, esi
        and    edx, 0xffff
        imul    edx, eax
        mov    ecx, ebx
        and    ecx, 0xffff
        cmp    ecx, edx
        jbe    L_435e
L_4349:
        shl    esi, 1
        mov    edx, esi
        and    edx, 0xffff
        imul    edx, eax
        cmp    ecx, edx
        mov    dword ptr [esp + 0x10], esi
        ja    L_4349
L_435e:
        mov    al, byte ptr [esp + 0x18]
        test    al, al
        je    L_43b7
        mov    eax, dword ptr [g_00859fb0]
        test    eax, eax
        je    L_4386
L_436f:
        mov    ecx, ebx
        and    ecx, 0xffff
        cmp    ecx, eax
        jbe    L_4386
        shr    word ptr [esp + 0xc], 1
        mov    ebx, dword ptr [esp + 0xc]
        jmp    L_436f
L_4386:
        mov    eax, dword ptr [g_00859fa8]
        mov    edx, ebx
        and    edx, 0xffff
        cmp    edx, eax
        jae    L_43a9
L_4397:
        shl    ebx, 1
        mov    ecx, ebx
        and    ecx, 0xffff
        cmp    ecx, eax
        mov    dword ptr [esp + 0xc], ebx
        jb    L_4397
L_43a9:
        mov    ax, word ptr [esp + 0xc]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    4
L_43b7:
        mov    eax, dword ptr [g_00859fac]
        test    eax, eax
        je    L_43d7
L_43c0:
        mov    edx, esi
        and    edx, 0xffff
        cmp    edx, eax
        jbe    L_43d7
        shr    word ptr [esp + 0x10], 1
        mov    esi, dword ptr [esp + 0x10]
        jmp    L_43c0
L_43d7:
        mov    eax, dword ptr [g_00859fa4]
        mov    ecx, esi
        and    ecx, 0xffff
        cmp    ecx, eax
        jae    L_43fa
L_43e8:
        shl    esi, 1
        mov    edx, esi
        and    edx, 0xffff
        cmp    edx, eax
        mov    dword ptr [esp + 0x10], esi
        jb    L_43e8
L_43fa:
        mov    ax, word ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    4
    }
}
